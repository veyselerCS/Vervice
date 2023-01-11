public class FooService : MonoService
{
    private void Awake()
    {
        Container.Instance.Register(this);
    }
}