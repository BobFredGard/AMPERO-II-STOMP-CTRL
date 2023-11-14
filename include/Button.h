  button1.setPressTicks(500);
  button2.setPressTicks(500);
  button3.setPressTicks(500);
  button4.setPressTicks(500);
  button5.setPressTicks(500);
  button6.setPressTicks(500);

  button1.attachClick([]() {if (menus == 1){pied = 1; pre_choix_ctrl = choix_ctrl; choix_ctrl = 1; loadPreset(); load_Patch();}});
  button2.attachClick([]() {if (menus == 1){pied = 2; pre_choix_ctrl = choix_ctrl; choix_ctrl = 2; loadPreset(); load_Patch();}});
  button3.attachClick([]() {if (menus == 1){pied = 3; pre_choix_ctrl = choix_ctrl; choix_ctrl = 3; loadPreset(); load_Patch();}});
  button4.attachClick([]() {if (menus == 1){pied = 4; pre_choix_ctrl = choix_ctrl; choix_ctrl = 4; loadPreset(); load_Patch();}});
  button5.attachClick([]() {if (menus == 1){pre_choix_ctrl = choix_ctrl; choix_ctrl = 5; loadPreset(); InvertDisplay();}});
  button6.attachClick([]() {if (menus == 1){pre_choix_ctrl = choix_ctrl; choix_ctrl = 6; loadPreset(); InvertDisplay();}});

  button1.attachLongPressStop([]() {if (menus == 1){ScreenBank();}});
  button2.attachLongPressStop([]() {if (menus == 1){ScreenBank();}});
  button3.attachLongPressStop([]() {if (menus == 1){ScreenSlotsA();}});
  button4.attachLongPressStop([]() {if (menus == 1){ScreenSlotsB();}});
  button5.attachLongPressStop([]() {if (menus == 1){ScreenSetup();}});
  button6.attachLongPressStop([]() {if (menus == 1){ScreenCopyProg();}});