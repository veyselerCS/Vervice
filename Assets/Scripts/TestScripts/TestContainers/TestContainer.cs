﻿public class TestContainer : Container
{
    protected override void Deploy()
    {
        var installer = new TestSceneInstaller();
        installer.Install(this);
    }
}