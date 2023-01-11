using System;
using NaughtyAttributes;
using UnityEngine;

public class TestMono : VonoBehaviour<TestMono>
{
    private TestService _testService;
    private FooService _fooService;

    [Button()]
    private void Test()
    {
        _testService.Foo();
    }
}