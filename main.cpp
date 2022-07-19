// libraries included
#include <Arduino.h>
#include <AccelStepper.h>

const int MotorInterfaceType = 4;

AccelStepper stepper1 = AccelStepper(MotorInterfaceType, 8, 9, 10, 11);
AccelStepper stepper2 = AccelStepper(MotorInterfaceType, 4, 5, 6, 7);

// declaration & initialisation of variable arrays
int fsrPin[] = {A0, A1};  
int fsrReading[] = {0, 0};
int numberOfSteps[] = {0, 0};

void setup() {
  stepper1.setMaxSpeed(1000);
  stepper2.setMaxSpeed(1000);

  Serial.begin(9600);
}

void loop() {
  // loop to obtain all fsrReading & numberOfSteps
  for (int i = 0; i < 2; i++) {
    fsrReading[i] = analogRead(fsrPin[i]);

    numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 700); 
    

    // calibration of 2nd fsr
    if (i == 1) {
      numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 100);
    }
  }

  // moving all the motors using the AccelStepper library
  stepper1.moveTo(numberOfSteps[0]);
  stepper2.moveTo(numberOfSteps[1]);

  stepper1.setSpeed(100);
  stepper2.setSpeed(100);

  stepper1.runSpeedToPosition();
  stepper2.runSpeedToPosition();
}