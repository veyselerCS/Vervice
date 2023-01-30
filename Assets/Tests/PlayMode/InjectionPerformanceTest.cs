using System.Collections;
using System.Reflection;
using NUnit.Framework;
using Unity.PerformanceTesting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.TestTools;

public class InjectionPerformanceTest
{
    private const int _warmupCount = 5;
    private const int _iterations = 1000000;
    private const int _measurementCount = 10;
    
    private WaitUntil _waitForServices;

    [OneTimeSetUp]
    public void Setup()
    {
    }
}
