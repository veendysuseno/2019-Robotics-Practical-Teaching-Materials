#include <Servo.h>
Servo myservo1;
Servo myservo2;

char val; 
int pinA = 5;
int pinB = 6;
int pinC = 9;
int pinD = 10;
int pos1 = 60;
int pos2 = 100;

void maju(){
analogWrite(pinA, 255);
analogWrite(pinB, 0);
analogWrite(pinC, 0);
analogWrite(pinD, 255);
}

void mundur(){
analogWrite(pinA, 0);
analogWrite(pinB, 255);
analogWrite(pinC, 255);
analogWrite(pinD, 0);
}

void berhenti(){
analogWrite(pinA, 0);
analogWrite(pinB, 0);
analogWrite(pinC, 0);
analogWrite(pinD, 0); 
}

void kanan(){
analogWrite(pinA, 255);
analogWrite(pinB, 0);
analogWrite(pinC, 255);
analogWrite(pinD, 0); 
}

void kiri(){
analogWrite(pinA, 0);
analogWrite(pinB, 255);
analogWrite(pinC, 0);
analogWrite(pinD, 255); 
}

void gripin(){
  pos2 = pos2-1;
  delay(10);
 // Serial.println(pos2);
  myservo2.write(pos2);
  if (pos2 <= 0){
    pos2 = 0;
    myservo2.write(pos2);
  }
}

void gripout(){
  pos2 = pos2+1;
  delay(10);
 // Serial.println(pos2);
  myservo2.write(pos2);
  if (pos2 >= 100){
    pos2 = 100;
    myservo2.write(pos2);
  }
}

void gripup(){
  pos1 = pos1+1;
  delay(20);
 // Serial.println(pos1);
  myservo1.write(pos1);
  if (pos1 >= 140){
    pos1 = 140;
    myservo1.write(pos1);
  }
}
void gripdown(){
  pos1 = pos1-1;
  delay(20);
 // Serial.println(pos1);
  myservo1.write(pos1);
  if (pos1 <= 65){
    pos1 = 65;
    myservo1.write(pos1);
  }
}

void setup(){
  Serial.begin(9600);       // start serial communication at 115200bps
  myservo1.attach(7);
  myservo2.attach(8);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
}

void loop() {
  if( Serial.available() ){     // if data is available to read
    val = Serial.read();        // read it and store it in 'val'
    Serial.println(val);  
  }
  
  if( val == '1' ){
    maju(); }
  else if( val == '3' ){
    mundur();}
  else if( val == '2' ){
    kiri();}
  else if( val == '4' ){
    kanan();}
  else if( val == '5' ){
    gripup();}
  else if( val == '7' ){
    gripdown();}
  else if( val == '6' ){
    gripin();}
  else if( val == '8' ){
    gripout();}
  else
  {
    berhenti();
  }
}





