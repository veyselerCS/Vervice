using System;
using System.Collections.Generic;
using UnityEngine;

[DefaultExecutionOrder(-2)]
public class ApplicationRoot : MonoBehaviour
{
    private Dictionary<string, ContainerRoot> ContainerRoots = new();

    private const string GlobalContainerKey = "Global";

    public static ApplicationRoot Instance;
    
    private void Awake()
    {
        Instance = this;
        new EventBus();
    }

    public void Register(Container container)
    {
        if (container.Context == ContextType.Global)
        {
            if(!ContainerRoots.ContainsKey(GlobalContainerKey))
                ContainerRoots.Add(GlobalContainerKey, new ContainerRoot());
            
            ContainerRoots[GlobalContainerKey].Register(container);
        }
        else if (container.Context == ContextType.Scene)
        {
            var go = container.gameObject;
            if(!ContainerRoots.ContainsKey(container.gameObject.scene.name))
            {
                ContainerRoots.Add(go.scene.name, new ContainerRoot());
            }
            
            ContainerRoots[go.scene.name].Register(container);
        }
    }
   
    public bool TryResolve<T>(out T service, string id = null) where T : IVervice
    {
        if(string.IsNullOrEmpty(id)) id = GlobalContainerKey;
        
        if (ContainerRoots.ContainsKey(id))
        {
            if (ContainerRoots[id].TryGet(out service))
                return true;
        }

        service = default;
        return false;
    }
    
    public bool TryResolve(out IVervice vervice, string id = null)
    {
        if(string.IsNullOrEmpty(id)) id = GlobalContainerKey;
        
        if (ContainerRoots.ContainsKey(id))
        {
            if (ContainerRoots[id].TryGet(out vervice))
                return true;
        }

        vervice = default;
        return false;
    }
    
    public T Resolve<T>(string id = null) where T : IVervice
    {
        if(string.IsNullOrEmpty(id)) id = GlobalContainerKey;

        if (TryResolve(out T service))
            return service;
        
        throw new Exception($"Could not resolve service of type {typeof(T)}");
    }
    
    public void AutoInject(MonoBehaviour mono, Type type, ContextType contextType, Action<object, object> accessor)
    {
        if(contextType == ContextType.Global)
            ContainerRoots[GlobalContainerKey].AutoInject(mono, type, accessor);
        else if(contextType == ContextType.Scene)
            ContainerRoots[mono.gameObject.scene.name].AutoInject(mono, type, accessor);
    }
}