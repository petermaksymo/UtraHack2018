
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <String.h>
#include <Stepper.h>

char command = 0;
int stepCount = 0;
int degree = 0;
const int led = 13;
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(80);
  pinMode(led, OUTPUT);
  // initialize the serial port:
  Serial.begin(9600);
  
}

void loop() {
  // step one revolution  in one direction:
  if (true) {
     stepCount = Serial.parseInt();
     Serial.print(stepCount);
     myStepper.step(stepCount);
     command = Serial.parseInt();
      if (command == 1) {
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
     }
  }
  delay(50);
}
  
