using System;
using System.Collections.Generic;
using UnityEngine;

[DefaultExecutionOrder(-1)]
public abstract class Container : MonoBehaviour
{
    [SerializeField] public ContextType Context;
    
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
    
    //<summary>Called by MonoVervice when it is awake</summary>
    public void RegisterMono(Type type, MonoVervice service)
    {
        _notReadyServices.Add(type, service);
        _registeryWaitingServiceTypes.Remove(type);
        
        CheckRegistrationFinish();
    }

    private void CheckRegistrationFinish()
    {
        if (_registeryWaitingServiceTypes.Count == 0)
        {
            BuildObjectGraph();
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
}