#include "Global.h"

void setup()
{
  Serial.begin(9600);
  Serial.println("start");

  motor.setMicroSteps(fullStep);

}

void loop()
{
  motor.write(1, 100, 2500);
  delay(500);
  motor.write(0, 100, 2500);
  delay(500);
}
