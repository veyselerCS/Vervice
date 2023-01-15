using System;
using System.Reflection;

public class DependencyNode
{
    public Type Type;
    public FieldInfo FieldInfo;
    public object Requirer;
    
    public DependencyNode(Type type, FieldInfo fieldInfo, object requirer)
    {
        Type = type;
        FieldInfo = fieldInfo;
        Requirer = requirer;
    }
}
