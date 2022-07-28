// libraries included
#include <Arduino.h>
#include <AccelStepper.h>

const int MotorInterfaceType = 4;
const int fsrCount = 2;

AccelStepper stepper1 = AccelStepper(MotorInterfaceType, 8, 9, 10, 11);
AccelStepper stepper2 = AccelStepper(MotorInterfaceType, 4, 5, 6, 7);

/*
class ForceSensor {
  public:
    int fsrPin;
    int fsrReading;
    ForceSensor(int fsrPin, int fsrReading) {
      fsrPin = fsrPin;
      fsrReading = fsrReading;
    }

    void getReading() {
      Serial.println(fsrReading);
    }
};

ForceSensor fsrs[5];
*/

// declaration & initialisation of variable arrays
int fsrPin[] = {A0, A1};
int fsrReading[] = {0, 0};
int numberOfSteps[] = {0, 0};

void setup() {
  stepper1.setMaxSpeed(900);
  stepper2.setMaxSpeed(900);

  Serial.begin(115200);
}

void loop() {
  // loop to obtain all fsrReading & numberOfSteps
  for (int i = 0; i < fsrCount; i++) {
    fsrReading[i] = analogRead(fsrPin[i]);

    // convert the particular fsrReading to a corresponding step value
    numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 1200);
    
    // slight hardware issue where fsr 2 is more senstive than 1, could be solved via software/code
    // perhaps use a conditional to detect if i = 1 (remember index 1 is fsr 2) is true then map to a revised value
    // example:
      // if (i == 1) {
      //   numberOfSteps[i] = map(fsrReading[i], x, x, x, x);
      // }
    
    if (i == 1) {
      numberOfSteps[i] = map(fsrReading[i], 0, 300, 0, 100);
    }
  }

  // moving all the motors using the AccelStepper library
  stepper1.moveTo(numberOfSteps[0]);
  stepper2.moveTo(numberOfSteps[1]);

  stepper1.setAcceleration(800.0);
  stepper2.setAcceleration(800.0);

  stepper1.run();
  stepper2.run();
}