  button1.setPressTicks(500);
  button2.setPressTicks(500); 
  button3.setPressTicks(500);
  button4.setPressTicks(500);
  button5.setPressTicks(500);

  button1.attachClick([]() {if (menus == 5){CopyBankMoins();}});
  button2.attachClick([]() {if (menus == 5){CopyBankPlus();}});
  button3.attachClick([]() {if (menus == 5){CopyPathSceneMoins();}});
  button4.attachClick([]() {if (menus == 5){CopyPathScenePlus();}});
  button5.attachClick([]() {if (menus == 5){ChangeProgMoins();}});
  button6.attachClick([]() {if (menus == 5){ChangeProgPlus();}});

  button1.attachLongPressStop([]() {if (menus == 5){SauveBank();}});
  button2.attachLongPressStop([]() {if (menus == 5){SauveBank();}});
  button3.attachLongPressStop([]() {if (menus == 5){SauvePatch();}});
  button4.attachLongPressStop([]() {if (menus == 5){SauvePatch();}});
  button5.attachLongPressStop([]() {if (menus == 5){
    ScreenSauve();
    SauveProg();
    pied = copy_patch;
    ScreenPatch();
    etat_Loop = 1;
  }});