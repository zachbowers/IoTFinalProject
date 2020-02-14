#include <Servo.h>    //LIbrary for the Servo
Servo Left_Arm;       //Assign Servo variable Left_Arm


void setup() {
  // put your setup code here, to run once:

  Left_Arm.attach(3); //Attaches Servo to PIN 3

}

void loop() {


}

void Wave()
{
  Left_Arm.write(40); //moves the arm to 40
  delay(3000);
  Left_Arm.write(270);
  delay(3000);
  Left_Arm.write(40);

}

void PickMyselfUp()
{
  Left_Arm.write(270);
  delay(1000);
  Left_Arm.write(40);
  delay(500);
  Left_Arm.write(180);
  
}
