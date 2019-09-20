int pinSpeaker = 7;
int delayTime = 100;        //rever esses valores
int longDur = 150;      //talvez retirar variáveis de dur
int shortDur = 40;

void setup()
{

}

void loop()
{
  int dice = random(0, 10);

  if (dice < 5)
  {
    tone(pinSpeaker, 100, longDur);
    delay(delayTime);
    tone(pinSpeaker, 150, longDur);
    delay(delayTime);
    tone(pinSpeaker, 180, longDur);
    delay(delayTime);
    tone(pinSpeaker, 120, longDur);
    delay(delayTime);
  }

  if (dice >= 5)
  {
    tone(pinSpeaker, 300, shortDur);
    delay(delayTime);
    tone(pinSpeaker, 350, shortDur);
    delay(delayTime);
    tone(pinSpeaker, 480, shortDur);
    delay(delayTime);
    tone(pinSpeaker, 450, shortDur);
    delay(delayTime);
  }
}
