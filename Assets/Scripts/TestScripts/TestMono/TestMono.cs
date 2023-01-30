using System;

public class TestMono : VonoBehaviour<TestMono>
{
    [Inject] private TestService _testService;
    [Inject] private FooService _fooService;
}