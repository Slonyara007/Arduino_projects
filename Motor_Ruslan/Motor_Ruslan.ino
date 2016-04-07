/*
 * MotorKnob
 *
 * A stepper motor follows the turns of a potentiometer
 * (or other sensor) on analog input 0.
 *
 * http://www.arduino.cc/en/Reference/Stepper
 * This example code is in the public domain.
 */

#include <Stepper_28BYJ.h>

// change this to the number of steps on your motor
#define STEPS 4078// количество шагов

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper_28BYJ stepper(STEPS, 8, 9, 10, 11);

// the previous reading from the analog input
int previous = 0;

void setup() {
  // установим скорость вращения 3 об/мин
  stepper.setSpeed(10);
}

void loop() {
  // get the sensor value
  
  stepper.step(STEPS/2);
  delay(1000); 
   stepper.step(-STEPS);
  delay(1000); 


}
