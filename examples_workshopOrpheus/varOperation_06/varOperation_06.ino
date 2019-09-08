int pinSpeaker = 7;
int baseFreq = 100;
int delayTime = 800;

void setup()
{
  
}

void loop()
{
  tone(pinSpeaker, baseFreq, 90);
  delay(delayTime);
  tone(pinSpeaker, baseFreq + 100, 90);
  delay(delayTime);
  tone(pinSpeaker, baseFreq + 200, 90);
  delay(delayTime);
  tone(pinSpeaker, baseFreq + 150, 90);
  delay(delayTime);
}
