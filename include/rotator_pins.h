/*!
* @file rotator_pins.h
*
* It is a header file for pin mapping.
*
* Licensed under the GPLv3
*
*/

#ifndef ROTATOR_PINS_H_
#define ROTATOR_PINS_H_

#define M1IN1 54 ///< Motor 1 Step
#define M1IN2 55  ///< Motor 1 Direction
#define M1EN 38 /// Enable pin

#define M2IN1 60 ///< Motor 2  Step
#define M2IN2 61  ///< Motor 2 Direction
#define M2EN 56 ///< Enable pin


#define SW1 3 ///< Digital input, to read the status of end-stop for motor 1
#define SW2 14 ///< Digital input, to read the status of end-stop for motor 2

#define RS485_DIR 2 ///< Digital output, to set the direction of RS485 communication

#define SDA_PIN 44 ///< I2C data pin
#define SCL_PIN 43 ///< I2C clock pin

#define PIN12 12 ///< General purpose I/O pin
#define PIN13 13 ///< General purpose I/O pin
#define A2    A2 ///< General purpose I/O & analog pin
#define A3    A3 ///< General purpose I/O & analog pin

#endif /* ROTATOR_PINS_H_ */
