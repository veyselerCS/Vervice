using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

[DefaultExecutionOrder(-1)]
public class Container : MonoBehaviour
{
    //singleton
    public static Container Instance { get; private set; }
    private Dictionary<Type, object> _readyServices = new();
    private List<IVervice> _readyToInitServices = new();

    private Dictionary<Type, Vervice> _pocoServices = new();
    private Dictionary<Type, MonoVervice> _monoServices = new();

    private HashSet<Type> _registeryWaitingServiceTypes = new();
    private Dictionary<Type, List<DependencyNode>> _objectGraph = new();

    private void Awake()
    {
        Instance = this;

        new POCOService();
        new BarPOCOService();

        _registeryWaitingServiceTypes.Add(typeof(FooService));
        _registeryWaitingServiceTypes.Add(typeof(TestService));
    }

    public void RegisterMono(Type type, MonoVervice service)
    {
        _monoServices.Add(type, service);
        _registeryWaitingServiceTypes.Remove(type);
        CheckRegistrationFinish();
    }

    public void Register(Type type, Vervice service)
    {
        _pocoServices.Add(type, service);
    }

    public void SetReady(Type type, Vervice service)
    {
        if(!_objectGraph.ContainsKey(type)) return;
        
        foreach (var dependency in _objectGraph[type])
        {
            var requirer = dependency.Requirer;
            dependency.FieldInfo.SetValue(requirer, service);
            
            var vervice = (IVervice)requirer;
            vervice.OnTypeResolved(type);
            
            if (vervice.Resolved)
            {
                vervice.Begin();
            }
        }

        _objectGraph.Remove(type);
        CheckInjectionFinish();
    }

    public void SetMonoReady(Type type, MonoVervice service)
    {
        if(!_objectGraph.ContainsKey(type)) return;
        
        foreach (var dependency in _objectGraph[type])
        {
            var requirer = dependency.Requirer;
            dependency.FieldInfo.SetValue(dependency.Requirer, service);
            
            var vervice = (IVervice)requirer;
            vervice.OnTypeResolved(type);
            
            if (vervice.Resolved)
            {
                vervice.Begin();
            }
        }

        _objectGraph.Remove(type);
        CheckInjectionFinish();
    }

    private void BuildObjectGraph()
    {
        BuildGraphForPoco();
        BuildGraphForMono();
        Resolve();
    }

    private void BuildGraphForPoco()
    {
        foreach (var typeServicePair in _pocoServices)
        {
            var pocoService = typeServicePair.Value;

            for (var i = pocoService.Dependencies.Count - 1; i >= 0; i--)
            {
                var dependency = pocoService.Dependencies[i];
                SetForLateBinding(dependency);
            }

            if (pocoService.Dependencies.Count == 0)
            {
                _readyToInitServices.Add(pocoService);
            }
        }
    }

    private void BuildGraphForMono()
    {
        foreach (var typeServicePair in _monoServices)
        {
            var monoService = typeServicePair.Value;

            for (var i = monoService.Dependencies.Count - 1; i >= 0; i--)
            {
                var dependency = monoService.Dependencies[i];
                SetForLateBinding(dependency);
            }

            if (monoService.Dependencies.Count == 0)
            {
                _readyToInitServices.Add(monoService);
            }
        }
    }

    private void SetForLateBinding(DependencyNode dependency)
    {
        if (_objectGraph.TryGetValue(dependency.Type, out var fieldInfos))
            fieldInfos.Add(dependency);
        else
            _objectGraph.Add(dependency.Type, new List<DependencyNode>() { dependency });
    }

    private void CheckRegistrationFinish()
    {
        if (_registeryWaitingServiceTypes.Count == 0)
        {
            BuildObjectGraph();
        }
    }

    private void CheckInjectionFinish()
    {
        if (_objectGraph.Count == 0)
        {
            Debug.Log("All services are ready");
        }
    }

    private void Resolve()
    {
        foreach (var service in _readyToInitServices)
        {
            service.Begin();
        }
        
        _readyToInitServices.Clear();
    }
    
    public void Resolve(object obj, Dictionary<Type, FieldInfo> fields)
    {
        foreach (var service in fields)
        {
            service.Value.SetValue(obj, _readyServices[service.Key]);
        }
    }
}