#include "Fan.h"
#include "Arduino.h"
#include "Servo.h"

void Fan::setPin(byte pin)
{
  this->pin = pin;
  pinMode(pin, OUTPUT);
}

void Fan::fanOn()
{
  digitalWrite(pin, 1);
}

bool Fan::isFanOn()
{
  return digitalRead(pin) ? true : false;
}

void Fan::turn(Servo servo)
{
  for (int pos = 0; pos <= 180; pos++)
  {
    servo.write(pos);
    delay(15);
  }
  for (int pos = 180; pos >= 0; pos--)
  {
    servo.write(pos);
    delay(15);
  }
}

void Fan::fanOff()
{
  digitalWrite(pin, 0);
}
