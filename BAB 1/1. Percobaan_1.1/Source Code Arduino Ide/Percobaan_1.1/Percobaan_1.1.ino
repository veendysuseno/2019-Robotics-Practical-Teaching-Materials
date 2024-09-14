#define M1 7
#define M2 6

void setup() {
  Serial.begin(9600);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}

void loop() {
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
}
