using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class VonoBehaviour<T> : MonoBehaviour
{
    public static Dictionary<Type, FieldInfo> Services { get; private set; }

    private void Awake()
    {
        if (Services == null)   
        {
            Services = new Dictionary<Type, FieldInfo>();
            //iterate over fields with reflection
            foreach (var field in typeof(T).GetFields(BindingFlags.Instance | BindingFlags.NonPublic))
            {
                if (field.FieldType.IsSubclassOf(typeof(MonoVervice)))
                {
                    Services.Add(field.FieldType, field);
                }
            }
        }
        
        Container.Instance.Resolve(this, Services);
    }
}