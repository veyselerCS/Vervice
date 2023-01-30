using System.Threading.Tasks;
using NaughtyAttributes;
using UnityEngine;
using UnityEngine.UI;

public class TestService : MonoVervice<TestService>
{
    private BarPOCOService _barPocoService;
    public int Value;
    public Text TextMesh;

    public async override void Begin()
    {
        TextMesh.text = Value.ToString();
        await Task.Delay(2000);
        SetReady();
    }
    
    //TEST with naughty attributes
    [Button()]
    public void Test()
    {
        _barPocoService.Test();
    }
}
