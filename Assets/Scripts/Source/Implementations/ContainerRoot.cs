using System;
using System.Collections.Generic;
using UnityEngine;

public class ContainerRoot
{
    private List<Container> _containers = new();

    public void Register(Container container)
    {
        _containers.Add(container);
    }
    
    public bool TryGet<T>(out T service) where T : IVervice
    {
        foreach (var container in _containers)
        {
            if (container.TryGet(out service))
                return true;
        }

        service = default;
        return false;
    }
    
    public void AutoInject(MonoBehaviour mono, Type type, Action<object, object> accessor)
    {
        foreach (var container in _containers)
        {
            if (container.TryGet(type, out var service))
            {
                accessor(mono, service);
            }
        }
    }
}
