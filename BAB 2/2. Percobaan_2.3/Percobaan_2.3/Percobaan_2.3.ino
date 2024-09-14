#define kananMaju   5
#define kananMundur 3
#define kiriMaju    10
#define kiriMundur  9
#define normalPWM   100

void setup() {
  Serial.begin(9600);
  pinMode(kananMaju,    OUTPUT);
  pinMode(kananMundur,  OUTPUT);
  pinMode(kiriMaju,     OUTPUT);
  pinMode(kiriMundur,   OUTPUT);
}

void loop() {
  int cm = sensor_ping(2, 4);
  if (cm < 10) {
    analogWrite(kananMaju,   100);
    analogWrite(kananMundur,   0);
    analogWrite(kiriMaju,      0);
    analogWrite(kiriMundur,    0);
  }
  else {
    analogWrite(kananMaju,    70);
    analogWrite(kananMundur,   0);
    analogWrite(kiriMaju,     70);
    analogWrite(kiriMundur,    0);
  }
}

int sensor_ping(const int trig, const int echo) {
  long duration, cm ;
  pinMode(trig, OUTPUT);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  pinMode(echo, INPUT);
  duration = pulseIn(echo, HIGH);
  cm = microsecondsToCentimeters(duration);
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
  return (cm);
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
