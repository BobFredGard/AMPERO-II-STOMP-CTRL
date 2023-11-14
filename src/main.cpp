#include <Arduino.h>

#include <Wire.h>
#include <SPIFFS.h>

#include <OneButton.h>
#include "Parameters.h"

#include <sqlite3.h>
sqlite3 *db_base;
#include "InitBD.h"
#include "ReadData.h"
#include "SauvProg.h"
#include "SauveSlots.h"
#include "SauveVol.h"

#include "HexaCodeWing.h"

#include <midi.h>
MIDI_CREATE_INSTANCE(HardwareSerial, Serial2, MIDI);
#define MIDI_CHANNEL_OMNI 0
#include "DataMIDISent.h"
#include "midiUSBCC.h"
#include "Stereoisation.h"
#include "LoadPreset.h"

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <U8g2_for_Adafruit_GFX.h>
#include <Adafruit_I2CDevice.h>
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(128, 32, &Wire, OLED_RESET);
U8G2_FOR_ADAFRUIT_GFX u8g2_for_adafruit_gfx;
#include "ScreensInit.h"
#include "ScreenSauve.h"
#include "InvertDisplay.h"
#include "load_Patch.h"
#include "SauvePatch.h"
#include "ChangeSlotsA.h"
#include "ChangeSlotsB.h"
#include "ChangeStereo.h"
#include "ChangeNames.h"
#include "ChangeBankPlus.h"
#include "ChangeBankMoins.h"
#include "ChangeBankName.h"
#include "ChangeProgMoins.h"
#include "ChangeProgPlus.h"
#include "ChangeVolPlus.h"
#include "ChangeVolMoins.h"
#include "ChangeEXP.h"
#include "CopyPathScenePlus.h"
#include "CopyPathSceneMoins.h"
#include "CopyBankMoins.h"
#include "CopyBankPlus.h"
#include "ScreenPatch.h"
#include "SauveCTRL.h"
#include "ScreenCTRL.h"
#include "ScreenAmpero.h"
#include "ScreenStomps.h"
#include "SauveBank.h"
#include "ScreenSetup.h"
#include "ScreenSlotsA.h"
#include "ScreenSlotsB.h"
#include "ScreenBank.h"
#include "ScreenCopyProg.h"

void setup()
{
  bank = 1;
  pre_pied = 1;
  old_Bank = 2000;

  Wire.begin(23, 21);
  InitSreens();
  ScreenAmpero();
  Serial.begin(115200);
  delay(150);

  MIDI.begin(canal_midi);  
  delay(150);

  if(SPIFFS.begin(true)){
    File root = SPIFFS.open("/");
    bank = 1;
    pied = 1;
    readData();
    program_change(ampero_bank_choice, prog_Change [pied], canal_midi); 
  }
  else {
    Serial.println("SPIFFS marche pas");
  } 

  ScreenStomps();
  delay(150);
  
  etat_Loop = 1;
  menus = 1;
  pied = 1;
  choix_ctrl = 1;
  pre_choix_ctrl = choix_ctrl;
  choix_ctrl = 1;
  loadPreset(); 
  load_Patch();

  ScreenPatch();
}


void loop()
{
  if (etat_Loop == 1) {
    #include "Button.h"
    etat_Loop = 0;
  }
  #include "ButtonTick.h"
}