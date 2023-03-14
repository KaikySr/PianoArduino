//BUTTONS ADDRESS
const BTN_C = 13;
const BTN_D = 12;
const BTN_E = 11;
const BTN_F = 10;
const BTN_G = 9;
const BTN_A = 8;
const BTN_B = 7;

int BTNS[] = {BTN_C, BTN_D, BTN_E, BTN_F, BTN_G, BTN_A, BTN_B};

void setButtons() {
  for(int i = 0; i < 7; i++) {
    pinMode(BTNS[i], INPUT_PULLUP);
  }
}

//LED ADDRESS
const byte LED_C = 0b11111110;
const byte LED_D = 0b11111101;
const byte LED_E = 0b11111011;
const byte LED_F = 0b11110111;
const byte LED_G = 0b11101111;
const byte LED_A = 0b11011111;
const byte LED_B = 0b10111111;
const byte BLANK = 0b11111111;
