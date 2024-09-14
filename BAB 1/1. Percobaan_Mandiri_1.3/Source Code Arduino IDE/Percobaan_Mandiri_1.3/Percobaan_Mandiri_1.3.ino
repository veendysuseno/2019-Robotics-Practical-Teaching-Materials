int M1 = 11;
int M2 = 10;
int pinPot = A0;

void setup() {
Serial.begin(9600);
pinMode(M1,OUTPUT);
pinMode(M2,OUTPUT);
pinMode(pinPot,INPUT);
}

void loop(){
long val = analogRead(pinPot);
Serial.println(val);
analogWrite(M1, (val)/4);
analogWrite(M2, 0);
Serial.print("val : ");
Serial.print(val);
Serial.println();
delay(500);
}
