/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int downDeg = 130;
int upDeg = 100;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
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
  }
  if (digitalRead(3) == LOW && pos != upDeg){
    pos = upDeg;
    myservo.write(pos);
  }
}
