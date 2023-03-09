using System;
using System.Collections.Generic;
using UnityEngine;

[DefaultExecutionOrder(-2)]
public class ContainerRoot : MonoBehaviour
{
    public static ContainerRoot Instance;
    
    private Dictionary<string, Container> Containers = new();
    
    private void Awake()
    {
        Instance = this;
    }
    
    public void Register(Container container)
    {
        if (container.Context == ContextType.Default)
        {
            Containers.Add(string.Empty, container);
        }
        else if (container.Context == ContextType.Scene)
        {
            Containers.Add(container.gameObject.scene.name, container);
        }
    }
    
    public void RegisterMonoVervice<T>(Type type, T service, ContextType contextType) where T : MonoVervice
    {
        var containerKey = contextType == ContextType.Default ? string.Empty : service.gameObject.scene.name;
        Containers[containerKey].RegisterMono(type, service);
    }
    
    public void SetReady<T>(Type type, T service, ContextType contextType) where T : IVervice
    {
        var containerKey = contextType == ContextType.Default ? string.Empty : service.SceneName;
        Containers[containerKey].SetReady(type, service);
    }

    public void Resolve(MonoBehaviour mono, Type type, ContextType contextType, Action<object, object> accessor)
    {
        var containerKey = contextType == ContextType.Default ? string.Empty : mono.gameObject.scene.name;
        Containers[containerKey].Resolve(mono, type, accessor);
    }
}
