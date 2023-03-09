using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class VonoBehaviour<T> : MonoBehaviour
{
    private static Dictionary<Type, Action<object, object>> _serviceAccessors;

    private void Awake()
    {
        if (_serviceAccessors == null)   
        {
            FillAccessors();
        }
        
        Container.Instance.ResolveVono(this, _serviceAccessors);
    }

    private void FillAccessors()
    {
        _serviceAccessors = new();
        
        //iterate over the fields with Inject attribute
        foreach (var fieldInfo in typeof(T).GetFields(BindingFlags.Instance | BindingFlags.NonPublic))
        {
            foreach (var customAttribute in fieldInfo.GetCustomAttributes())
            {
                if (customAttribute.GetType() == typeof(Inject))
                {
                    //get cecil injected method
                    var fieldType = fieldInfo.FieldType;
                    var injectorMethod = typeof(T).GetMethod("Inject" + fieldInfo.Name, BindingFlags.Static | BindingFlags.Public);
                    
                    if(fieldType.IsSubclassOf(typeof(Vervice)) || fieldType.IsSubclassOf(typeof(MonoVervice)))
                    {
                        var delegateType = typeof(Action<object, object>);
                        Delegate del = Delegate.CreateDelegate(delegateType, injectorMethod);
                        _serviceAccessors.Add(fieldType, (Action<object, object>)del);
                    }
                }
            }
        }
    }
}