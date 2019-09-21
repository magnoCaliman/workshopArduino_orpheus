int pinPot = A0;
int pinLed = 2;
int sensorReading;
int delayTime;

void setup()
{
  Serial.begin(9600);
  pinMode(pinPot, INPUT);   // redundant
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  sensorReading = analogRead(pinPot);
  delayTime = map(sensorReading, 0, 1023, 100, 2000);

  digitalWrite(pinLed, HIGH);
  delay(delayTime);
  digitalWrite(pinLed, LOW);
  delay(delayTime);

  Serial.println(delayTime);
  delay(10);
}
