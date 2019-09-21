int pinButton = 5;
int pinSpeaker = 7;
int baseFreq = 100;
int noteDur = 90;
int delayTime = 100;

void setup()
{
  pinMode(pinButton, INPUT);
}

void loop()
{
  int buttonState = digitalRead(pinButton);

  tone(pinSpeaker, baseFreq, noteDur);
  delay(delayTime);
  tone(pinSpeaker, baseFreq + 100, noteDur);
  delay(delayTime);
  tone(pinSpeaker, baseFreq + 200, noteDur);
  delay(delayTime);
  tone(pinSpeaker, baseFreq + 300, noteDur);
  delay(delayTime);

  if (buttonState == HIGH)
  {
    baseFreq = random(100, 800);
  }
}
