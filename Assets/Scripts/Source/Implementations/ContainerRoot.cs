using System;
using System.Collections.Generic;
using UnityEngine;

public class ContainerRoot
{
    public string RootId;
    
    private Dictionary<Type, IVervice> _readyServices = new();
    
    public ContainerRoot(string rootId)
    {
        RootId = rootId;
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
            vervice.OnDependencyResolved(type);
            
            if (vervice.Resolved)
            {
                vervice.Begin();
            }
        }

        _objectGraph.Remove(type);
        CheckInjectionFinish();
    }


    private void CheckInjectionFinish()
    {
        if (_objectGraph.Count == 0)
        {
            //TODO Raise Container Ready Event
            Debug.LogWarning("Container Ready");
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
    
    
    public void RegisterMonoVervice<T>(Type type, T vervice, ContextType contextType) where T : MonoVervice
    {
        var containerKey = contextType == ContextType.Global ? string.Empty : vervice.gameObject.scene.name;
        Containers[containerKey].RegisterMono(type, vervice);
    }
    
    public void SetReady<T>(Type type, T vervice, ContextType contextType) where T : IVervice
    {
        var containerKey = contextType == ContextType.Global ? string.Empty : vervice.SceneName;
        Containers[containerKey].SetReady(type, vervice);
    }

    //<summary>VonoBehaviour auto resolve method</summary>
    public void Resolve(MonoBehaviour mono, Type type, ContextType contextType, Action<object, object> accessor)
    {
        var containerKey = contextType == ContextType.Global ? string.Empty : mono.gameObject.scene.name;
        Containers[containerKey].Resolve(mono, type, accessor);
    }
    
    public void Resolve(object obj, Type type, Action<object, object> accessor)
    {
        var service = _readyServices[type];
        accessor(obj, service);
    }
}
