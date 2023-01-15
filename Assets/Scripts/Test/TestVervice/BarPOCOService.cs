using UnityEngine;

public class BarPOCOService : Vervice<BarPOCOService>
{
    public override void Begin()
    {
        SetReady();
    }

    public void Test()
    {
        Debug.LogWarning("EYO BAR POCO");
    }
}