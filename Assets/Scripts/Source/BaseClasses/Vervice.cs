using System;
using System.Collections.Generic;
using System.Reflection;

public abstract class Vervice<T> : Vervice
{
    protected Vervice()
    {
        Dependencies = new();

        //iterate over fields with reflection
        foreach (var field in GetType().GetFields(BindingFlags.Instance | BindingFlags.NonPublic))
        {
            if (field.FieldType.IsSubclassOf(typeof(MonoVervice)) || field.FieldType.IsSubclassOf(typeof(Vervice)))
            {
                Dependencies.Add(new DependencyNode(field.FieldType, field, this));
            }
        }
    }

    protected void SetReady()
    {
        ContainerRoot.Instance.SetReady(typeof(T), this, GetContextType());
    }

    private ContextType GetContextType()
    {
        var contextAttribute = GetType().GetCustomAttribute(typeof(Context)) as Context;
        return contextAttribute?.Type ?? ContextType.Default;
    }
}

public abstract class Vervice : IVervice
{
    public List<DependencyNode> Dependencies { get; set; }
    public bool Resolved => Dependencies.Count == 0;
    public string SceneName { get; set; }
    public abstract void Begin();

    public void OnDependencyResolved(Type resolvedDependencyType)
    {
        for (var i = 0; i < Dependencies.Count; i++)
        {
            if (Dependencies[i].Type == resolvedDependencyType)
            {
                Dependencies.RemoveAt(i);
                return;
            }
        }
    }
}