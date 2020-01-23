#include <AFMotor.h>

AF_DCMotor M1(1); 
AF_DCMotor M2(2);
AF_DCMotor M3(3);
AF_DCMotor M4(4);

char command; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
}

void loop(){  
  if(Serial.available() > 0){ 
    command = Serial.read(); 
    Stop(); //initialize with motors stoped
    //Change pin mode only if new command is different from previous.   
    //Serial.println(command);
    switch(command){
    case 'F':  
      forward();
      break;
    case 'B':  
       back();
      break;
    case 'L':  
      left();
      break;
    case 'R':
      right();
      break;
        }
    }
  }
void forward()
{
  M1.setSpeed(80); //Define maximum velocity
  M1.run(FORWARD); //rotate the motor clockwise
  M2.setSpeed(80); //Define maximum velocity
  M2.run(FORWARD); //rotate the motor clockwise
  M3.setSpeed(80); //Define maximum velocity
  M3.run(FORWARD); //rotate the motor clockwise
  M4.setSpeed(80); //Define maximum velocity
  M4.run(FORWARD); //rotate the motor clockwise

}

void back()
{
  M1.setSpeed(80); //Define maximum velocity
  M1.run(BACKWARD); //rotate the motor clockwise
  M2.setSpeed(80); //Define maximum velocity
  M2.run(BACKWARD); //rotate the motor clockwise
  M3.setSpeed(80); //Define maximum velocity
  M3.run(BACKWARD); //rotate the motor clockwise
  M4.setSpeed(80); //Define maximum velocity
  M4.run(BACKWARD); //rotate the motor clockwise
}

void left()
{
  M1.setSpeed(80); //Define maximum velocity
  M1.run(BACKWARD); //rotate the motor clockwise
  M2.setSpeed(80); //Define maximum velocity
  M2.run(BACKWARD); //rotate the motor clockwise
  M3.setSpeed(80); //Define maximum velocity
  M3.run(FORWARD); //rotate the motor clockwise
  M4.setSpeed(80); //Define maximum velocity
  M4.run(FORWARD); //rotate the motor clockwise

}

void right()
{
  M1.setSpeed(80); //Define maximum velocity
  M1.run(FORWARD); //rotate the motor clockwise
  M2.setSpeed(80); //Define maximum velocity
  M2.run(FORWARD); //rotate the motor clockwise
  M3.setSpeed(80); //Define maximum velocity
  M3.run(BACKWARD); //rotate the motor clockwise
  M4.setSpeed(80); //Define maximum velocity
  M4.run(BACKWARD); //rotate the motor clockwise
}

void Stop()
{
  M1.setSpeed(0); //Define maximum velocity
  M1.run(RELEASE); //rotate the motor clockwise
  M2.setSpeed(0); //Define maximum velocity
  M2.run(RELEASE); //rotate the motor clockwise
  M3.setSpeed(0); //Define maximum velocity
  M3.run(RELEASE); //rotate the motor clockwise
 M4.setSpeed(0); //Define maximum velocity
  M4.run(RELEASE); //rotate the motor clockwise
}


