using System;
using System.Collections.Generic;
using System.Reflection;
using NaughtyAttributes;
using UnityEngine;

[DefaultExecutionOrder(-1)]
public class Container : MonoBehaviour
{
    //singleton
    public static Container Instance { get; private set; }
    public Dictionary<Type, MonoService> services = new Dictionary<Type, MonoService>();

    private void Awake()
    {
        Instance = this;
    }

    [Button()]
    private void Resolve()
    {
        foreach (var service in MonoServiceManager.Instance.Services)
        {
            service.Value.SetValue(MonoServiceManager.Instance, services[service.Key]);
        }
    }

    public void Resolve(object obj, Dictionary<Type, FieldInfo> fields)
    {
        foreach (var service in fields)
        {
            service.Value.SetValue(obj, services[service.Key]);
        }
    }
    
    public void Register<T>(T service) where T : MonoService
    {
        services.Add(typeof(T), service);
    }
}

