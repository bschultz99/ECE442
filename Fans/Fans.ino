#define intakePin 5
#define exhaustPin 6

void setup() {
  pinMode(intakePin, OUTPUT);
  pinMode(exhaustPin, OUTPUT);

}

void loop() {
  //speed must be a number between 0 and 255
  int speed = 180;
  analogWrite(intakePin, speed);
  analogWrite(exhaustPin, speed);

}
