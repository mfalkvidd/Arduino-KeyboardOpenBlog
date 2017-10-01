/*
   Assumes Swedish keyboard layout and Windows OS
*/

#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(2000);
}

void loop() {
  Keyboard.press(131); // WIN
  Keyboard.press(114); // r
  delay(100);
  Keyboard.releaseAll();
  delay(400);
  Keyboard.print("https");
  delay(50);
  Keyboard.write(62); // : (colon)
  delay(50);
  Keyboard.write(38); // / (slash)
  delay(50);
  Keyboard.print("mikaelfalkvidd.com");
  delay(50);
  Keyboard.write(10); // Enter
  delay(60 * 60 * (unsigned long) 1000);
}

