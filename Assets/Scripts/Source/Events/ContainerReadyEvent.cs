using System;

public class ContainerReadyEvent : EventArgs
{
    public ContainerReadyEvent(Container container)
    {
        Container = container;
    }

    public Container Container { get; }
}