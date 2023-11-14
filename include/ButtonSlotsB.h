  button5.setPressTicks(500);

  button1.attachClick([]() {if (menus == 4){ChangeSlotsB(7);}});
  button2.attachClick([]() {if (menus == 4){ChangeSlotsB(8);}});
  button3.attachClick([]() {if (menus == 4){ChangeSlotsB(9);}});
  button4.attachClick([]() {if (menus == 4){ChangeSlotsB(10);}});
  button5.attachClick([]() {if (menus == 4){ChangeSlotsB(11);}});
  button6.attachClick([]() {if (menus == 4){ChangeSlotsB(12);}});

  if (choix_ctrl < 5) {button5.attachLongPressStop([]() {
    if (menus == 4){
      ScreenSauve();
      SauveSlots();
      ScreenCTRL();
    }});}
  else {button5.attachLongPressStop([]() {if (menus == 4){
      ScreenSauve();
      SauveSlots();
      ScreenPatch();
      etat_Loop = 1;
    }});}