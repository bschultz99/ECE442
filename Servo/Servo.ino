#include <Servo.h>
Servo myservo;
#define servoPin 10
int angle = 0;

void setup() {
  myservo.attach(servoPin);
}

void loop() {
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);
  myservo.write(0);
  delay(1000);

}
