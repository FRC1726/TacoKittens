#include <Servo.h>

Servo right;
Servo left;

double forward = 0;
double still = 90;
double backward = 180;

void setup() {
  // put your setup code here, to run once:
  right.attach(9);
  left.attach(10);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 RobotReverse(1000);
 RobotStill(1000);
 Serial.println(right.readMicroseconds());
 Serial.println(left.readMicroseconds());
 RobotForward(1000);
 RobotStill(1000);
 Serial.println(right.readMicroseconds());
 Serial.println(left.readMicroseconds());

}



void RobotForward(int time) {
  right.write(forward);
  left.write(backward);
  delay(time);
}
void RobotReverse(int time) {
  right.write(backward);
  left.write(forward);
  delay(time);
}
void RobotStill(int time) {
  right.write(still);
  left.write(still);
  delay(time);
}
void RobotLeft(int time) {
  right.write(forward);
  left.write(forward);
  delay(time);
}
void RobotRight(int time) {
  right.write(backward);
  left.write(backward);
  delay(time);
}

