//add custom attribute

using System;

[AttributeUsage(AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public class Inject : Attribute
{
    public Inject()
    {
    }
}