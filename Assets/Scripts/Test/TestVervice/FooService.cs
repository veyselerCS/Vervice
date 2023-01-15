using NaughtyAttributes;

public class FooService : MonoVervice<FooService>
{
    private TestService _testService;
    private BarPOCOService _barPocoService;
    
    public override void Begin()
    {
        SetReady();
    }
    
        
    [Button()]
    public void Test()
    {
        _barPocoService.Test();
    }
}