using System;
using System.Collections.Generic;
using UnityEngine;

public class ApplicationRoot : MonoBehaviour
{
    private Dictionary<string, ContainerRoot> Containers = new();

    private const string GlobalContainerKey = "Global";

    public static ApplicationRoot Instance;
    
    private void Awake()
    {
        Instance = this;
    }

    public void Register(Container container)
    {
        if (container.Context == ContextType.Global)
        {
            if(!Containers.ContainsKey(GlobalContainerKey))
                Containers.Add(GlobalContainerKey, new ContainerRoot(GlobalContainerKey));
        }
        else if (container.Context == ContextType.Scene)
        {
            if(!Containers.ContainsKey(container.gameObject.scene.name))
            {
                var go = container.gameObject;
                Containers.Add(go.scene.name, new ContainerRoot(go.scene.name));
            }
        }
    }
}