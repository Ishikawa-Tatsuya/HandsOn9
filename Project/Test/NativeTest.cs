﻿using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Codeer.Friendly;
using Codeer.Friendly.Dynamic;
using Codeer.Friendly.Windows;
using System.Diagnostics;
using System.Windows.Forms;
using Codeer.Friendly.Windows.Grasp;
using Codeer.Friendly.Windows.NativeStandardControls;
using System.IO;

namespace Test
{
    [TestClass]
    public class NativeTest
    {
        const int IDC_LIST = 1000;
        const int IDC_TREE = 1001;
        const int IDOK = 1;

        WindowsAppFriend _app;
        WindowControl _dlg;

        [TestInitialize]
        public void TestInitialize()
        {
            string exePath = Path.GetFullPath("../../../MFCApplication.exe");
            _app = new WindowsAppFriend(Process.Start(exePath));
            _dlg = WindowControl.FromZTop(_app);
        }

        [TestCleanup]
        public void TestCleanup()
        {
            Process.GetProcessById(_app.ProcessId).CloseMainWindow();
        }
    }
}
