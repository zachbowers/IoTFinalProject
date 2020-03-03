#include <Servo.h>    //LIbrary for the Servo
#include <Stepper.h>  //Library for the stepper motors 
Servo Left_Arm;       //Assign Servo variable Left_Arm
#include <TimedAction.h>

const int stepsPerRevolution = 20; // Define number of steps per revolution: this has some effect on the torque ive noticed
int i=0;
Stepper LeftStepper = Stepper(stepsPerRevolution, 8, 9, 10, 11); // Initialize the stepper library on pins 8 through 11
Stepper RightStepper = Stepper(stepsPerRevolution, 4, 5, 6, 7); // Initialize the stepper library on pins 4 through 7



//****************STEPPER MOTOR FUNCTIONS******************
//use this for directional movements IE; left right, forward
// and backwards
//*********************************************************
  void ForwardRightStepper()
{
  RightStepper.step(20);
}
void ForwardLeftStepper()
{
  LeftStepper.step(20); 
}
void turnright()
{
  RightStepper.step(300);
}
//********************************************************

 
TimedAction RightForward = TimedAction(10, ForwardRightStepper);
TimedAction LeftForward = TimedAction(10, ForwardLeftStepper);
  

void setup() {
  // put your setup code here, to run once:

  Left_Arm.attach(3); //Attaches Servo to PIN 3
  PickMyselfUp();
   
   
   //sets speed of stepper: 300 seems to be the magic number 
   LeftStepper.setSpeed(300); //sets speed of left stepper
   RightStepper.setSpeed(300);
 
}

void loop() {
RightForward.check();
LeftForward.check();

}


//****************SERVO FUNCTIONS*************************
// Use this for the functionality of the servos 
//********************************************************
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

  
  
