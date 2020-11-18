#ifndef SmokeSensor_h
#define SmokeSensor_h
#include "Arduino.h"
/*
  El sensor de humo se activa cuando se crea una instancia de la clase SmokeSensor,
  para definir el pin, se usa el metodo setPin().

  Metodos de la clase SmokeSensor:

  setPin()     - Establece el pin donde esta conectado el sensor de humo
  getPin()     - Retorna el pin 
  sRead()      - Retorna la lectura del sensor de humo
  isSmoking()  - Retorna 1 si hay humo, de lo contrario, 0
  
*/

class SmokeSensor
{
private:
  byte pin;

public:
  void setPin(byte pin);
  byte getPin();
  float sRead();
  bool isSmoking();
};
#endif
