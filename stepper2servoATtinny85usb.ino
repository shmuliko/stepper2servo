#include <Adafruit_SoftServo.h> //you need add this directory 

Adafruit_SoftServo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position
int downDeg = 130;
int upDeg = 100;

void setup() {
  myservo.attach(0);  // attaches the servo on pin 9 to the servo object
  pinMode(2, INPUT);  // read x ping
  pinMode(3, INPUT);  // read x direction
  attachInterrupt(0, calcPos, CHANGE);
}

void loop() {

}

void calcPos(){
  if (digitalRead(3) == HIGH && pos != downDeg){
    pos = downDeg;
    myservo.write(pos);
    myservo.refresh();
  }
  if (digitalRead(3) == LOW && pos != upDeg){
    pos = upDeg;
    myservo.write(pos);
    myservo.refresh();
  }
}
