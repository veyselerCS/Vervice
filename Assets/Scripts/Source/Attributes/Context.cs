using System;

[AttributeUsage(AttributeTargets.Class)]
public class Context : Attribute
{
    public ContextType Type;
    
    public Context(ContextType type)
    {
        Type = type;
    }
}