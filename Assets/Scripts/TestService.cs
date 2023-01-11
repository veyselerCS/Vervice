using System;
using System.Reflection;
using UnityEngine;

public class TestService : MonoService
{
    private void Awake()
    {
        Container.Instance.Register(this);
    }
    
    public void Foo()
    {
        Debug.LogWarning("I am a test service");
    }
}