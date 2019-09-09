int pinSpeaker = 7;

void setup()
{
  
}

void loop()
{
  int delayTime = random(100, 1000);
  
  tone(pinSpeaker, 100, 90);
  delay(delayTime);
  tone(pinSpeaker, 200, 90);
  delay(delayTime);
  tone(pinSpeaker, 300, 90);
  delay(delayTime);
  tone(pinSpeaker, 400, 90);
  delay(delayTime);
}
