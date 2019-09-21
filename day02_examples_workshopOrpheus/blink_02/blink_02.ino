int pinLed = 2;
int delayTime;

void setup()
{
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);  
}

void loop()
{
  delayTime = random(50, 400);
  
  digitalWrite(pinLed, HIGH);
  delay(delayTime);
  digitalWrite(pinLed, LOW);
  delay(delayTime);  

  Serial.println(delayTime);
}
