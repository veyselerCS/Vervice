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
        
        Container.Instance.Register(typeof(T), this);
    }

    protected void SetReady()
    {
        Container.Instance.SetReady(typeof(T), this);
    }
}

public abstract class Vervice: IVervice
{
    public List<DependencyNode> Dependencies { get;  set; }
    public bool Resolved => Dependencies.Count == 0;
    public abstract void Begin();
    public void OnTypeResolved(Type type)
    {
        for (var i = 0; i < Dependencies.Count; i++)
        {
            if (Dependencies[i].Type == type)
            {
                Dependencies.RemoveAt(i);
                return;
            }
        }
    }
}

public interface IVervice
{
    void Begin();
    void OnTypeResolved(Type t);
    bool Resolved { get; }
    List<DependencyNode> Dependencies { get; }
}