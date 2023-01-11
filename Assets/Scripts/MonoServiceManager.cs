using System;
using System.Collections.Generic;
using System.Reflection;
using NaughtyAttributes;
using UnityEngine;

public class MonoServiceManager : MonoBehaviour
{
    public static MonoServiceManager Instance { get; private set; }
    public Dictionary<Type, FieldInfo> Services { get; private set; }
    
    private TestService _testService;
    private FooService _fooService;
    private void Awake()
    {
        Services = new Dictionary<Type, FieldInfo>();
        
        //iterate over fields with reflection
        foreach (var field in GetType().GetFields(BindingFlags.Instance | BindingFlags.NonPublic))
        {
            if (field.FieldType.IsSubclassOf(typeof(MonoService)))
            {
                Services.Add(field.FieldType, field);
            }
        }
        
        Instance = this;
    }
    
    [Button()]
    public void Test()
    {
        Debug.LogWarning("Test");
    }
}