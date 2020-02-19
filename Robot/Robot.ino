#include <Servo.h>    //LIbrary for the Servo
#include <Stepper.h>  //Library for the stepper motors 
Servo Left_Arm;       //Assign Servo variable Left_Arm


const int stepsPerRevolution = 200; // Define number of steps per revolution:

Stepper LeftStepper = Stepper(stepsPerRevolution, 8, 9, 10, 11); // Initialize the stepper library on pins 8 through 11

Stepper RightStepper = Stepper(stepsPerRevolution, 4, 5, 6, 7); // Initialize the stepper library on pins 4 through 7
void setup() {
  // put your setup code here, to run once:

  Left_Arm.attach(3); //Attaches Servo to PIN 3
  PickMyselfUp();

   LeftStepper.setSpeed(100); //sets speed of left stepper
   RightStepper.setSpeed(100);
}

void loop() {
  //Wave();
  //PickMyselfUp();

//**************STEPPER TEST*****************************
   // Step one revolution in one direction:
  LeftStepper.step(200),RightStepper.step(200);
  delay(2000);
  // Step on revolution in the other direction:
  LeftStepper.step(-200);
  RightStepper.step(-200);
  delay(2000);
}


//****************SERVO FUNCTIONS*************************
// Use this for the functionality of the servos 
//********************************************************


//*********************WAVE*********************************
// This is just a function to test the movement of the servo
//**********************************************************
void Wave() 
{
  Left_Arm.write(40); //moves the arm to 40 degree
  delay(1000);        // 3second pause
  Left_Arm.write(270);//moves the arm to 270 degree
  delay(1000);        // 3 second pause
  Left_Arm.write(40); //moves the arm to 40 degree
}

//*********************PICKMYSELFUP*************************
// This allows the robot to pick itself back up when resting 
// the Front Bumper
//**********************************************************
void PickMyselfUp() 
{
   Left_Arm.write(270); //moves the arm to 40 degree
  delay(3000);        // 3second pause
  Left_Arm.write(100);//moves the arm to 270 degree
  //delay(3000);        // 3 second pause
  //Left_Arm.write(270); //moves the arm to 40 degree
  
  
}
