using NaughtyAttributes;
using UnityEngine;

public class FooMono : VonoBehaviour<FooMono>
{
    [Inject] private TestService _testService;

    [Button()]
    private void TestFoo()
    {
        Debug.LogWarning("I am Fo     oMono");
    }
}