public class SceneTestContainer : Container
{
    private new void Awake()
    {
        base.Awake();
        var installer = new TestSceneInstaller();
        installer.Install(this);
    }
}