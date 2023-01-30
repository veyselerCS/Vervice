public class POCOService : Vervice<POCOService>
{
    public POCOService()
    {
    }

    public override void Begin()
    {
        SetReady();
    }
}