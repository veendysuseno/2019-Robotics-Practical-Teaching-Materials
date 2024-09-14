#include <Servo.h>
#include<SoftwareSerial.h>

char bdata = '0';
Servo myservo;
SoftwareSerial blue(11,12);

void setup(){
  Serial.begin(9600);
  blue.begin(9600);
  myservo.attach(6);
}

void loop() {
  Serial.println(bdata);
  if(blue.available()){
    bdata = blue.read();
    if(bdata == '6'){
      myservo.write(120);
      delay(1000);
    }
    if(bdata == '8'){
      myservo.write(90);
      delay(1000);
    }
    delay(500);
  }
}
