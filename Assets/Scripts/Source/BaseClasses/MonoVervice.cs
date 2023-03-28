using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public abstract class MonoVervice<T> : MonoVervice
{
    private void Awake()
    {
        SceneName = gameObject.scene.name;
        Dependencies = new();

        //iterate over fields with reflection
        foreach (var field in GetType().GetFields(BindingFlags.Instance | BindingFlags.NonPublic))
        {
            if (field.FieldType.IsSubclassOf(typeof(MonoVervice)) || field.FieldType.IsSubclassOf(typeof(Vervice)))
            {
                Dependencies.Add(new DependencyNode(field.FieldType, field, this));
            }
        }

        ContainerRoot.Instance.RegisterMonoVervice(typeof(T), this, GetContextType());
    }

    protected void SetReady()
    {
        ContainerRoot.Instance.SetReady(typeof(T), this, GetContextType());
    }
}

public abstract class MonoVervice : MonoBehaviour, IVervice
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