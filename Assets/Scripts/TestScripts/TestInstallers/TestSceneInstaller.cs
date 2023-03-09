public class TestSceneInstaller : ContainerInstaller
{
    public override void Install(Container container)
    {
        container.Install(typeof(POCOService));
        container.Install(typeof(BarPOCOService));
        container.Install(typeof(FooService));
        container.Install(typeof(TestService));
    }
}