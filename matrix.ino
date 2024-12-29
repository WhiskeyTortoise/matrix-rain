#include <TFT_eSPI.h>
#include "src/libraries/TP_Arduino_DigitalRain_Anim/src/DigitalRainAnimation.hpp"

TFT_eSPI tft=TFT_eSPI();
DigitalRainAnimation<TFT_eSPI> matrix=DigitalRainAnimation<TFT_eSPI>();


void setup() {
  tft.init();
  tft.setRotation(3);
  tft.fillScreen(TFT_BLACK);

  matrix.init(&tft);
  // Dark text
  matrix.setTextColor(255,170,0);
  // Light text
  matrix.setHeadCharColor(255,200,100);

}

void loop() {
  matrix.loop();

}
