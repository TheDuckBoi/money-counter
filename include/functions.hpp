#include <Arduino.h>

// button pins
extern const int C1;
extern const int C10;
extern const int C25;
extern const int S1;

extern const int addr;
extern float money;
extern float oldMoney;
extern float wantMoney;
extern unsigned long time;
extern unsigned long oldTime;
extern bool add;

float readButtons();
void ledBlink(int blinkTime);
void setupPins();
void multiBlink(int blinkTime, int blinkNumber);
void subtractMode();
void addMode();