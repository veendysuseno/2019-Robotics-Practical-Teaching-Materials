#define  M1 11
#define  M2 10
#define  M3 9
#define  M4 6
#define  M5 5
#define  M6 3
#define  M7 2
#define  M8 1

void setup() {
  Serial.begin(9600);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);
  pinMode(M5, OUTPUT);
  pinMode(M6, OUTPUT);
  pinMode(M7, OUTPUT);
  pinMode(M8, OUTPUT);
}

void loop() {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  delay(3000);
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, HIGH);
  delay(3000);
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, LOW);
  digitalWrite(M5, HIGH);
  digitalWrite(M6, LOW);
  delay(4000);
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, LOW);
  digitalWrite(M5, LOW);
  digitalWrite(M6, LOW);
  delay(3000);
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  digitalWrite(M3, LOW);
  digitalWrite(M4, HIGH);
  digitalWrite(M5, LOW);
  digitalWrite(M6, HIGH);
  delay(4000);
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, LOW);
  digitalWrite(M5, LOW);
  digitalWrite(M6, LOW);
}
