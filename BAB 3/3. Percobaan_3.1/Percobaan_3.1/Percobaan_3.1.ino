#define kananMaju   3
#define kananMundur 5
#define kiriMaju    9
#define kiriMundur  10
#define normalPWM   100

int error, lasterror, deltaPWM;
int SensorID, TotalSensor;
const int PIN_SENSOR[8]   = {A0, A1, A2, A3, A4, A5, A6, A7};
int Nilai_Sensor[8]       = {0, 0, 0, 0, 0, 0, 0, 0};
float Kp = 1, Ki = 1, Kd  = 1;
int threshold = 100;

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

  TotalSensor = (Nilai_Sensor[0] << 0) + (Nilai_Sensor[1] << 1) + (Nilai_Sensor[2] << 2) + (Nilai_Sensor[3] << 3) + (Nilai_Sensor[4] << 4) + (Nilai_Sensor[5] << 5) + (Nilai_Sensor[6] << 6) + (Nilai_Sensor[7] << 7);

  if (TotalSensor == 0b00000000)
    error = lasterror;
  else if (TotalSensor == 0b00011000)
    error = 0;
  else if (TotalSensor == 0b00001000)
    error = 5;
  else if (TotalSensor == 0b00001100)
    error = 10;
  else if (TotalSensor == 0b00000100)
    error = 15;
  else if (TotalSensor == 0b00000110)
    error = 20;
  else if (TotalSensor == 0b00000010)
    error = 25;
  else if (TotalSensor == 0b00000011)
    error = 30;
  else if (TotalSensor == 0b00000001)
    error = 35;
  else if (TotalSensor == 0b10000000)
    error = -35;
  else if (TotalSensor == 0b11000000)
    error = -30;
  else if (TotalSensor == 0b01000000)
    error = -25;
  else if (TotalSensor == 0b01100000)
    error = -20;
  else if (TotalSensor == 0b00100000)
    error = -15;
  else if (TotalSensor == 0b00110000)
    error = -10;
  else if (TotalSensor == 0b00010000)
    error = -5;

  lasterror = error;
  deltaPWM = (Kp * error) + (Ki * (error + lasterror)) + (Kd * (error - lasterror));

  int PWM_kiri = (normalPWM + deltaPWM) ;
  if (PWM_kiri > (2.5 * normalPWM)) PWM_kiri = (2.5 * normalPWM);
  else if (PWM_kiri < 0) PWM_kiri = 0;
  int PWM_kanan = normalPWM - deltaPWM;
  if (PWM_kanan > (2.5 * normalPWM)) PWM_kanan = (2.5 * normalPWM);
  else if (PWM_kanan < 0) PWM_kanan = 0;

  analogWrite(kananMaju,    PWM_kanan );
  analogWrite(kananMundur,  0         );
  analogWrite(kiriMaju,     PWM_kiri  );
  analogWrite(kiriMundur,   0         );

  Serial.print("Total Sensor: ");
  Serial.println(TotalSensor);
  for (SensorID = 0; SensorID < 8; SensorID++) {
    Serial.println(Nilai_Sensor[SensorID]);
  }
  delay(500);
}
