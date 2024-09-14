#include <Servo.h>
Servo myservo;
int ap, pos;
void setup() {
  Serial.begin(9600);
  myservo.attach(2);
  pos = 90;
  myservo.write(pos);
  delay(2000);
}
void loop() {
  int ap = Serial.parseInt();
  if (Serial.available() > 0) {
    Serial.println(ap);
    if (ap < 270) {
      delay(50);
      myservo.write(pos);
      pos++;
    }
    if (ap > 370) {
      delay(50);
      myservo.write(pos);
      pos--;
    }
  }
}
