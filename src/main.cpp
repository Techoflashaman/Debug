#include <Arduino.h>
#include "avr8-stub.h"
#include "app_api.h" //only needed with breakpoints

void setup()
{
  debug_init();
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
