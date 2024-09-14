const int PIN_SENSOR[8] = {A0, A1, A2, A3, A4, A5, A6, A7};
int Nilai_Sensor[8]     = {0, 0, 0, 0, 0, 0, 0, 0};
int threshold           = 550;
int SensorID, TotalSensor;

void setup() {
  Serial.begin(9600);
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

  TotalSensor = (Nilai_Sensor[0] << 0) + (Nilai_Sensor[1] << 1) + (Nilai_Sensor[2] << 2) + (Nilai_Sensor[3] << 3) + (Nilai_Sensor[4] << 4) + (Nilai_Sensor[5] << 5) + (Nilai_Sensor[6] << 6) + (Nilai_Sensor[7] << 7);

  Serial.print("Total Sensor: ");
  Serial.println(TotalSensor);
  for (SensorID = 0; SensorID < 8; SensorID++) {
    Serial.println(Nilai_Sensor[SensorID]);
  }
  delay(500);
}
