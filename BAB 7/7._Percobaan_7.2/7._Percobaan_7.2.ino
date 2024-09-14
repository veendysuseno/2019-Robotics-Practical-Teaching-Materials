#include<SoftwareSerial.h>
#define M11 5
#define M12 3
#define M21 10
#define M22 9

char bdata = '0';
SoftwareSerial blue(11, 12);

void setup() {
  Serial.begin(9600);
  blue.begin(9600);
  pinMode(M11, OUTPUT);
  pinMode(M12, OUTPUT);
  pinMode(M21, OUTPUT);
  pinMode(M22, OUTPUT);
}

void loop() {
  Serial.print("bdata = ");
  Serial.println(bdata);
  if (blue.available()) {
    bdata = blue.read();
    if (bdata == '3') {
      digitalWrite(M11, HIGH);
      digitalWrite(M12, LOW);
      digitalWrite(M21, HIGH);
      digitalWrite(M22, LOW);
    }
    else if (bdata == '1') {
      digitalWrite(M11, LOW);
      digitalWrite(M12, HIGH);
      digitalWrite(M21, LOW);
      digitalWrite(M22, HIGH);
    }
    else if (bdata == '0') {
      digitalWrite(M11, LOW);
      digitalWrite(M12, LOW);
      digitalWrite(M21, LOW);
      digitalWrite(M22, LOW);
    }
  }
}
