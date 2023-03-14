#include <Wire.h>
#include "led_address.h"

const int MPX_ADDR = 0x20;

void writeLED(int address, byte data) {
  Wire.beginTransmission(address);
  Wire.write(data);
  Wire.endTransmission();
}

void setup()
{
  Wire.begin();
  setButtons();
}

void loop()
{
  writeLED(MPX_ADDR, LED_C);
  delay(500);
}
