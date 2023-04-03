using System;

public class VerviceReadyEvent : EventArgs
{
    public VerviceReadyEvent(IVervice vervice)
    {
        Vervice = vervice;
    }

    public IVervice Vervice { get; }
}