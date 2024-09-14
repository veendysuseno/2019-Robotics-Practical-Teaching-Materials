#define kananMaju     5    //3
#define kananMundur   3   //5
#define kiriMaju      10 //9
#define kiriMundur    9 //10

int SensorID, TotalSensor;
const int PIN_SENSOR[8] = {A0, A1, A2, A3, A4, A5, A6, A7};
int Nilai_Sensor[8]     = {0, 0, 0, 0, 0, 0, 0, 0};
int threshold           = 550;

void setup() {
  Serial.begin(9600);
  pinMode(kananMaju,    OUTPUT);
  pinMode(kananMundur,  OUTPUT);
  pinMode(kiriMaju,     OUTPUT);
  pinMode(kiriMundur,   OUTPUT);
  for (SensorID = 0; SensorID < 8; SensorID++) {
    pinMode(PIN_SENSOR[SensorID], INPUT);
  }
}

void loop() {
  for (SensorID = 0; SensorID < 8; SensorID++) {
    Nilai_Sensor[SensorID] = analogRead(PIN_SENSOR[SensorID]);
    if (Nilai_Sensor[SensorID] > threshold) {
      Nilai_Sensor[SensorID] = 1;
    }
    else {
      Nilai_Sensor[SensorID] = 0;
    }
  }

  if (Nilai_Sensor[4] == 1 && Nilai_Sensor[3] == 1) {
    analogWrite(kananMaju,    100);
    analogWrite(kiriMaju,     100);
  }
  else {
    analogWrite(kiriMaju,     0);
    analogWrite(kiriMundur,   0);
    analogWrite(kananMaju,    0);
    analogWrite(kananMundur,  0);
  }
  for (SensorID = 0; SensorID < 8; SensorID++) {
    Serial.println(Nilai_Sensor[SensorID]);
  }
  Serial.println("---");
  delay(500);
}
