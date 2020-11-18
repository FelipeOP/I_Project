#ifndef Fan_h
#define Fan_h
#include "Servo.h"
#include "Arduino.h"

/*
  Un ventilador se activa cuando se crea una instancia de la clase Fan,
  para definir el pin, se usa el metodo setPin()

  
  *********El pin donde se conecte el ventilador debe ser PWN*********

  Metodos de la clase Fan:

  setPin()   - Establece el pin donde esta conectado el ventilador
  fanOn()    - Enciende el ventilador
  isFanOn()  - Retorna el estado actual del ventilador (1 si esta encendido, 0 si esta apagado)
  fanOff()   - Apaga el ventilador
  turn()     - Empieza a girar el servo (Se debe enviar un objeto de tipo servo)
  
*/


class Fan
{
private:
    byte pin;
public:
    void setPin(byte pin);
    void fanOn();
    bool isFanOn();
    void fanOff();
    void turn(Servo servo); 
};
#endif
