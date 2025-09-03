	#include <AccelStepper.h>


#define Run 4 // The run button connects to digital pin 4
#define Limit 5 // The limit switch connects to digital pin 5
#define RRGB 9 // The Red of the RGB connects to pin 9
#define GRGB 10 // The Green of the RGB connects to pin 10
#define BRGB 11 // The Blue of the RGB connects to pin 11


float flowRate = 20; // Flow Rate in millimeter per minute
float diameter = 18.7; // initialize the diameter to whatever is set by the user


// Stepper motor setup
AccelStepper stepper(AccelStepper::DRIVER, 3, 2); // initialize the stepper motor
// inner diameter for 20ml - 18.7 diameter
// inner diameter for 10ml - 15 diameter
// Variables
bool runButtonState = false; // initialize the run button to not active
bool limitSwitchState = false; // initialize the limit switch to not active
float radius = diameter / 2;
float mmMl = 318.31 / (radius * radius); // this calculation yields the mm per ml ratio
float stepSec = (1.66666 * mmMl * flowRate); // this calculation yields the necessary steps per second.


void setup() {
 
// initialize all pins to their respective input / output state
  pinMode(Run, INPUT_PULLUP);
  pinMode(Limit, INPUT_PULLUP);
  pinMode(RRGB, OUTPUT);
  pinMode(GRGB, OUTPUT);
  pinMode(BRGB, OUTPUT);


 


  // Initialize stepper motor
  stepper.setMaxSpeed(1000); // state the maximum possible speed of the stepper motor
  stepper.setAcceleration(500); // state the acceleration of the stepper motor
  stepper.setSpeed(stepSec);
}


void loop() {
  runButtonState = digitalRead(Run); // read the state of the run button
  limitSwitchState = digitalRead(Limit); // read the state of the limit switch


  if (runButtonState) {
    if(limitSwitchState == HIGH){
      stepper.runSpeed();
      digitalWrite (RRGB, LOW);
      digitalWrite (GRGB, HIGH);
      digitalWrite (BRGB, LOW);
    } else if(limitSwitchState == LOW) {
      digitalWrite (RRGB, HIGH);
      digitalWrite (GRGB, LOW);
      digitalWrite (BRGB, LOW);
    }
  } else {
    digitalWrite (RRGB, HIGH);
    digitalWrite (GRGB, HIGH);
    digitalWrite (BRGB, LOW);
  }}

