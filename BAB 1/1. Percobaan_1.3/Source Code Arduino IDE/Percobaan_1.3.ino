int M1 = 11;
int M2 = 10;

void setup() {
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() {
  digitalWrite(M2, LOW);
  digitalWrite(M1, HIGH);
  delayMicroseconds(300);
  digitalWrite(M1, LOW);
  delayMicroseconds(1000 - 300);
}
