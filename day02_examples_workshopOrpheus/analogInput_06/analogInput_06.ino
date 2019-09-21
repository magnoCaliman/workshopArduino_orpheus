int potPin = A0; // what's the difference between an analog and a digital pin?

void setup()
{
  Serial.begin(9600);
  pinMode(potPin, INPUT);  // analog pins are set as INPUT automatically
}                          // so line 6 is actually redundant
                         

void loop()
{
  int sensorValue = analogRead(potPin);
  Serial.println(sensorValue);
//  
//  float sensorValue_volts = sensorValue * (5.0 / 1024.0);
//  Serial.println(sensorValue_volts);

  delay(10);
}
