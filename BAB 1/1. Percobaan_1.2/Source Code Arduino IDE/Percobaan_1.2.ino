int M1 = 11;
int M2 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() {
  analogWrite(M1, 191);
  analogWrite(M2, 0);
}
