int pinSpeaker = 7;

void setup()
{
  
}

void loop()
{
  tone(pinSpeaker, 100, 90);
  delay(random(100, 1000));
  tone(pinSpeaker, 200, 90);
  delay(random(100, 1000));
  tone(pinSpeaker, 300, 90);
  delay(random(100, 1000));
  tone(pinSpeaker, 400, 90);
  delay(random(100, 1000));
}
