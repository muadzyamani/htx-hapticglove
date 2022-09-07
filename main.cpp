// libraries included
#include <Arduino.h>
#include <AccelStepper.h>

// declaration of constants
const int MotorInterfaceType = 4;
const int fsrCount = 5;

// NOTE: pin initialisation is flipped
// wires can be changed if declared in sequence: (22, 23, 24, 25)
AccelStepper stepper1 = AccelStepper(MotorInterfaceType, 25, 24, 23, 22);
AccelStepper stepper2 = AccelStepper(MotorInterfaceType, 29, 28, 27, 26);
AccelStepper stepper3 = AccelStepper(MotorInterfaceType, 33, 32, 31, 30);
AccelStepper stepper4 = AccelStepper(MotorInterfaceType, 37, 36, 35, 34);
AccelStepper stepper5 = AccelStepper(MotorInterfaceType, 41, 40, 39, 38);

// declaration & initialisation of variable arrays
int fsrPin[] = {A1, A2, A3, A4, A5};
int fsrReading[] = {0, 0, 0, 0, 0};
int numberOfSteps[] = {0, 0, 0, 0, 0};

void setup() {
  stepper1.setMaxSpeed(600);
  stepper2.setMaxSpeed(600);
  stepper3.setMaxSpeed(600);
  stepper4.setMaxSpeed(600);
  stepper5.setMaxSpeed(600);

  Serial.begin(115200);
}

void loop() {
  // loop to obtain all fsrReading & numberOfSteps
  for (int i = 0; i < fsrCount; i++) {
    fsrReading[i] = analogRead(fsrPin[i]);

    // convert the particular fsrReading to a corresponding step value
    // numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 1500);
    
    // calibration is requried where fsr 2 is more senstive than 1
    // could be solved via software/code
    // perhaps use a conditional to detect if i = 1 (remember index 1 is fsr 2) is true then map to a revised value
    // example:
      // if (i == 1) {
      //   numberOfSteps[i] = map(fsrReading[i], x, x, x, x);
      // }
    
    if (i == 0) {
      numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 2000);
    } else if (i == 1) {
      numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 2000);
    } else if (i == 2) {
      numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 2000);
    } else if (i == 3) {
      numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 2000);
    } else if (i == 4) {
      numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 2000);
    }
    
    // else if (i == ...){
      
  //}
  }

  // moving all the motors using the AccelStepper library
  stepper1.moveTo(numberOfSteps[0]);
  stepper2.moveTo(numberOfSteps[1]);
  stepper3.moveTo(numberOfSteps[2]);
  stepper4.moveTo(numberOfSteps[3]);
  stepper5.moveTo(numberOfSteps[4]);

  stepper1.setAcceleration(1000.0);
  stepper2.setAcceleration(1000.0);
  stepper3.setAcceleration(1000.0);
  stepper4.setAcceleration(1000.0);
  stepper5.setAcceleration(1000.0);

  stepper1.run();
  stepper2.run();
  stepper3.run();
  stepper4.run();
  stepper5.run();
}