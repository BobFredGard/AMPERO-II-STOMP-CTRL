  button1.attachClick([]() {if (menus == 6){ChangeBankMoins();}});
  button2.attachClick([]() {if (menus == 6){ChangeBankPlus();}});
  button3.attachClick([]() {if (menus == 6){}});
  button4.attachClick([]() {if (menus == 6){}});
  button5.attachClick([]() {if (menus == 6){}});
  button6.attachClick([]() {if (menus == 6){
    load_Patch();
    choix_ctrl = 1;
    ScreenPatch(); 
    etat_Loop = 1;
    }});
