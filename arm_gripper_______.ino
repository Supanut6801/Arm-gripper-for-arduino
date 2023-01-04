#include <Wire.h> 
#include <Servo.h> // import the servo library

//arm gripper
int servo = 6 ; 
Servo myservo;

int con = 24 ;

int c1; // checkers

void setup() {
  myservo.attach(servo);

  pinMode(con,INPUT);
  
  Serial.begin(9600);

  c1 = 0;
  myservo.write(0);
}

void loop() {
  
  digitalRead(con);

  if(digitalRead(con) == HIGH)
  {
    myservo.write(30);
    c1 = 1;
  }
  else
  {
    myservo.write(0);
    c1 = 0;
  }

  Serial.println(c1);
  

}
