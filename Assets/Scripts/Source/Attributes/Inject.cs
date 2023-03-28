using System;

[AttributeUsage(AttributeTargets.Field)]
public class Inject : Attribute
{
    public ContextType Context;

    public Inject(ContextType context)
    {
        Context = context;
    }
    
    public Inject()
    {
        Context = ContextType.Global;
    }
}