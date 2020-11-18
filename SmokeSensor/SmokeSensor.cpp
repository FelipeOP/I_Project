#include "SmokeSensor.h"
#include "Arduino.h"

void SmokeSensor::setPin(byte pin)
{
    this->pin = pin;
}

byte SmokeSensor::getPin()
{
    return pin;
}

float SmokeSensor::sRead()
{
    return analogRead(pin);
}

bool SmokeSensor::isSmoking()
{
    return sRead() > 110 ? true : false;
}
