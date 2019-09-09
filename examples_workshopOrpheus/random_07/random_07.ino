int pinSpeaker = 7;
int delayTime = 100;

void setup()
{
  
}

void loop()
{
  tone(pinSpeaker, random(100, 500), 90);
  delay(delayTime);
}
