using System.Threading.Tasks;
using NaughtyAttributes;

public class TestService : MonoVervice<TestService>
{
    private BarPOCOService _barPocoService;
    public async override void Begin()
    {
        await Task.Delay(3000);
        SetReady();
    }
    
    //TEST with naughty attributes
    [Button()]
    public void Test()
    {
        _barPocoService.Test();
    }
}
