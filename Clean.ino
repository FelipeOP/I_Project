#include <Servo.h>
#include <SmokeSensor.h>
#include <Fan.h>

Fan fan;
SmokeSensor ss;
Servo servo;

void setup()
{
  Serial.begin(9600);
  servo.write(0);
  //Pin servo
  servo.attach(2);
  //Pin Sensor
  ss.setPin(A0);
  //Pin ventilador
  fan.setPin(3);
  //delay
  delay(10000);
}

void loop()
{
  Serial.println(ss.sRead());
  Serial.println(ss.isSmoking());
  if(ss.isSmoking())
  {
    fan.fanOn();
    if (fan.isFanOn())
    {
      fan.turn(servo);
    }
  }
  else
  {
    fan.fanOff();
  }
  
  delay(500);
}
