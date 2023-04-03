using System;

public class VerviceAwakenEvent : EventArgs
{
    public VerviceAwakenEvent(MonoVervice vervice)
    {
        Vervice = vervice;
    }

    public MonoVervice Vervice { get; }
}