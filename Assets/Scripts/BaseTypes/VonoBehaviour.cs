using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class VonoBehaviour<T> : MonoBehaviour
{
    protected static Dictionary<Type, Action<object, object>> ServiceAccessors;

    private void Awake()
    {
        if (ServiceAccessors == null)   
        {
            FillAccessors();
        }
        
        Container.Instance.Resolve(this, ServiceAccessors);
    }

    private void FillAccessors()
    {
        ServiceAccessors = new();
        
        //iterate over the fields with Inject attribute
        foreach (var fieldInfo in typeof(T).GetFields(BindingFlags.Instance | BindingFlags.NonPublic))
        {
            foreach (var customAttribute in fieldInfo.GetCustomAttributes())
            {
                if (customAttribute.GetType() == typeof(Inject))
                {
                    var fieldType = fieldInfo.FieldType;
                    var injectorMethod = typeof(T).GetMethod("Inject" + fieldInfo.Name, BindingFlags.Static | BindingFlags.Public);
                    
                    if(fieldType.IsSubclassOf(typeof(Vervice)) || fieldType.IsSubclassOf(typeof(MonoVervice)))
                    {
                        var delegateType = typeof(Action<object, object>);
                        Delegate del = Delegate.CreateDelegate(delegateType, injectorMethod);
                        ServiceAccessors.Add(fieldType, (Action<object, object>)del);
                    }
                }
            }
        }
    }
}