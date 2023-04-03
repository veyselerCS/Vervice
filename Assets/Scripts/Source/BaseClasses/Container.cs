using System;
using System.Collections.Generic;
using UnityEngine;

[DefaultExecutionOrder(-1)]
public abstract class Container : MonoBehaviour
{
    [SerializeField] public ContextType Context;
    
    private Dictionary<Type, IVervice> _readyServices = new();
    
    //<summary>Registered services with some unresolved dependencies</summary>
    private Dictionary<Type, IVervice> _notReadyServices = new();

    //<summary>List<DependencyNode> : Contains the requirer infos who requires an injection of a service with type : Type</summary>
    private Dictionary<Type, List<DependencyNode>> _objectGraph = new();

    //<summary>Services that are ready to be initialized from entry point</summary>
    private List<IVervice> _readyToInitServices = new();
    
    //<summary>Services that are waiting for their mono behavior to be registered to the container</summary>
    private HashSet<Type> _registeryWaitingServiceTypes = new();

    protected void Awake()
    {
        ApplicationRoot.Instance.Register(this);
        
        EventBus.Instance.Subscribe<VerviceAwakenEvent>(OnVerviceAwaken);
        EventBus.Instance.Subscribe<VerviceReadyEvent>(OnVerviceReady);
        
        Deploy();
        CheckRegistrationFinish();
    }

    //<summary>Install API will be called on overrides and vervices will be deployed</summary>
    protected virtual void Deploy()
    {
        
    }
    
    //<summary>Mono services will be registered at their awake</summary>
    //<summary>Execution order is ensured by setting DefaultExecutionOrder</summary>
    public void Install(Type type)
    {
        if(type.IsSubclassOf(typeof(MonoVervice)))
        {
            _registeryWaitingServiceTypes.Add(type);
        }
        else
        {
            var service = (Vervice)Activator.CreateInstance(type);
            service.SceneName = gameObject.scene.name;
            _notReadyServices.Add(type, service);
        }
    }

    private void OnVerviceAwaken(VerviceAwakenEvent data)
    {
        var type = data.Vervice.GetType();
        if (!_notReadyServices.ContainsKey(type)) return;
        
        _notReadyServices.Add(type, data.Vervice);
        _registeryWaitingServiceTypes.Remove(type);
        
        CheckRegistrationFinish();
    }
    
    private void CheckRegistrationFinish()
    {
        if (_registeryWaitingServiceTypes.Count == 0)
        {
            BuildObjectGraph();
            CheckGlobalContext();
            Resolve();
        }
    }
    
    private void BuildObjectGraph()
    {
        foreach (var typeServicePair in _notReadyServices)
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

    private void CheckGlobalContext()
    {
        foreach (var typeToRequirers in _objectGraph)
        {
            var type = typeToRequirers.Key;
            if(ApplicationRoot.Instance.TryResolve(out var vervice))
            {
                ResolveDependenciesByType(vervice, type);
            }
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
    
    public bool TryGet<T>(out T service) where T : IVervice
    {
        if (_readyServices.TryGetValue(typeof(T), out var vervice))
        {
            service = (T) vervice;
            return true;
        }

        service = default;
        return false;
    }
    
    public bool TryGet(Type type, out IVervice service)
    {
        if (_readyServices.TryGetValue(type, out service))
        {
            return true;
        }

        service = default;
        return false;
    }
    
    private void OnVerviceReady(VerviceReadyEvent data)
    {
        var type = data.Vervice.GetType();
        if (!_notReadyServices.ContainsKey(type)) return;
        
        _readyServices.Add(type, data.Vervice);
        
        if(!_objectGraph.ContainsKey(type)) return;
        
        ResolveDependenciesByType(data.Vervice, type);
        CheckInjectionFinish();
    }

    private void ResolveDependenciesByType(IVervice readyVervice, Type type)
    {
        foreach (var dependency in _objectGraph[type])
        {
            var requirer = dependency.Requirer;
            dependency.FieldInfo.SetValue(requirer, readyVervice);

            var requirerVervice = (IVervice)requirer;
            requirerVervice.OnDependencyResolved(type);

            if (requirerVervice.Resolved)
            {
                requirerVervice.Begin();
            }
        }

        _objectGraph.Remove(type);
    }

    private void CheckInjectionFinish()
    {
        if (_objectGraph.Count == 0)
        {
           EventBus.Instance.Publish(new ContainerReadyEvent(this));
        }
    }
}