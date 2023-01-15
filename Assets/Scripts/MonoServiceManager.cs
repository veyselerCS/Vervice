using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using NaughtyAttributes;
using Unity.VisualScripting;
using UnityEngine;

public class MonoServiceManager : MonoBehaviour
{
    [SerializeField] private TestMono Template;
    
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
            if (field.FieldType.IsSubclassOf(typeof(MonoVervice)))
            {
                Services.Add(field.FieldType, field);
            }
        }
        
        Instance = this;
    }
    
    [Button()]
    public void PerformanceTest()
    {
        StartCoroutine(Create());
    }

    public IEnumerator Create()
    {
        //create 1000 TestMono
        for (int i = 0; i < 10000; i++)
        {
            Instantiate(Template);
        }

        yield return null;
        yield return null;
        Debug.Break();
    }
}