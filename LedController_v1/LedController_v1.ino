#include <SPI.h>
#include "LedMatrix.h"
 
#define NUMBER_OF_DEVICES 1
#define CS_PIN 15
LedMatrix ledMatrix = LedMatrix(NUMBER_OF_DEVICES, CS_PIN);
 
void setup()
{
ledMatrix.init();
ledMatrix.setIntensity(12); // range is 0-15
ledMatrix.setText("Teste");
}
 
void loop()
{
ledMatrix.clear();
ledMatrix.scrollTextLeft();
ledMatrix.drawText();
ledMatrix.commit();
delay(200);
}