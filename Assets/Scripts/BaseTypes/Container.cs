using System;
using System.Collections.Generic;
using System.Reflection;
using System.Reflection.Emit;
using NaughtyAttributes;
using UnityEngine;

[DefaultExecutionOrder(-1)]
public class Container : MonoBehaviour
{
    //singleton
    public static Container Instance { get; private set; }
    
    private Dictionary<Type, object> _readyServices = new();

    private Dictionary<Type, IVervice> _pocoServices = new();
    private Dictionary<Type, IVervice> _monoServices = new();
    
    private Dictionary<Type, List<DependencyNode>> _objectGraph = new();

    private List<IVervice> _readyToInitServices = new();
    private HashSet<Type> _registeryWaitingServiceTypes = new();

    private void Awake()
    {
        Instance = this;

        new POCOService();
        new BarPOCOService();
        
        //mono behaviors will be registered after this awake call    
        _registeryWaitingServiceTypes.Add(typeof(FooService));
        _registeryWaitingServiceTypes.Add(typeof(TestService));
    }

    public void Register(Type type, Vervice service)
    {
        _pocoServices.Add(type, service);
    }
    
    public void RegisterMono(Type type, MonoVervice service)
    {
        _monoServices.Add(type, service);
        _registeryWaitingServiceTypes.Remove(type);
        CheckRegistrationFinish();
    }

    public void SetReady(Type type, IVervice service)
    {
        _readyServices.Add(type, service);
        
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

    private void BuildObjectGraph()
    {
        BuildObjectGraphForVervices(_pocoServices);
        BuildObjectGraphForVervices(_monoServices);
        Resolve();
    }

    private void BuildObjectGraphForVervices(Dictionary<Type, IVervice> vervices)
    {
        foreach (var typeServicePair in vervices)
        {
            var vervice = typeServicePair.Value;

            for (var i = vervice.Dependencies.Count - 1; i >= 0; i--)
            {
                var dependency = vervice.Dependencies[i];
                SetForLateBinding(dependency);
            }

            if (vervice.Dependencies.Count == 0)
            {
                _readyToInitServices.Add(vervice);
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
        _pocoServices.Clear();
        _monoServices.Clear();
    }
    
    public void Resolve(object obj, Dictionary<Type, Action<object, object>> accessors)
    {
        foreach (var accesor in accessors)
        {
            var type = accesor.Key;
            var service = _readyServices[type];
            accesor.Value(obj, service);
        }
    }

    public void Resolve<T>(ref T obj)
    {
        obj = (T)_readyServices[typeof(T)];
    }

    [Button()]
    public void DumpServiceTypes()
    {
        foreach (var service in _readyServices)
        {
            Debug.Log(service.Key);
        }
    }
}