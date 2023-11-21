#include <M5CoreS3.h>
// #include <M5Stack.h>

void setup() {
  M5.begin(true, true, false);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(100, 120);
  M5.Lcd.print("Hello World");
}

void loop() {
  USBSerial.println("Hello World");
  delay(500);
}
