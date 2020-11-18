# Documentación PI
## Librería SmokeSensor
### Métodos
------------
#### setPin(pin)

Establece un pin para el sensor.

**Sintaxis**
```cpp
smokeSensor.setPin(pin)
```
**Parametros**
- *smokeSensor* : una variable de tipo `SmokeSensor`
- *pin* : el número del pin del arduino.
------------

#### getPin()

Obtiene el pin de conexión

**Sintaxis**
```cpp
smokeSensor.getPin()
```
**Parametros**
- *smokeSensor* : una variable de tipo `SmokeSensor`

**Retorna**

El pin de conexión actual

------------

#### sRead()

Obtiene la lectura del sensor

**Sintaxis**
```cpp
smokeSensor.sRead()
```
**Parametros**
- *smokeSensor* : una variable de tipo `SmokeSensor`

**Retorna**

El valor de la lectura del sensor de humo

------------

#### isSmoking()

Verifica si hay lectura de humo

**Sintaxis**
```cpp
smokeSensor.isSmoking()
```
**Parametros**
- *smokeSensor* : una variable de tipo `SmokeSensor`

**Retorna**

`true` si hay lectura de humo, de lo contrario, `false`


## Librería Fan
### Métodos
------------
#### setPin(pin)

Establece un pin para el ventilador

**Sintaxis**
```cpp
fan.setPin(pin)
```
**Parametros**
- *fan* : una variable de tipo `Fan`
- *pin* : el número del pin del arduino
------------

#### fanOn()

Enciende el ventilador.

**Sintaxis**
```cpp
fan.fanOn()
```
**Parametros**
- *fan* : una variable de tipo `Fan`

------------

#### isFanOn()

Obtiene el estado del ventilador

**Sintaxis**
```cpp
fan.isFanOn()
```
**Parametros**
- *fan* : una variable de tipo `Fan`

**Retorna**

`true` si el ventilador esta activo, de lo contrario, `false`

------------

#### fanOff()

Apaga el ventilador

**Sintaxis**
```cpp
fan.fanOff()
```
**Parametros**
- *fan* : una variable de tipo `Fan`

------------

#### turn(servo)

Activa un servo para que comience a girar

**Sintaxis**
```cpp
fan.turn(servo)
```
**Parametros**
- *fan* : una variable de tipo `Fan`
- *servo* : una variable de tipo `Servo`

------------

Para leer la documentación de la librería `Servo`, siga este enlace.
- [Servo](https://github.com/arduino-libraries/Servo/blob/master/docs/api.md#methods "Servo")



