#include <Servo.h>    //LIbrary for the Servo
Servo Left_Arm;       //Assign Servo variable Left_Arm


void setup() {
  // put your setup code here, to run once:

  Left_Arm.attach(3); //Attaches Servo to PIN 3
  PickMyselfUp();

}

void loop() {
  //Wave();
  //PickMyselfUp();
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
