int pinSpeaker = 7;
int delayTime = 100;        //rever esses valores
int durSomLongo = 150;      //talvez retirar variáveis de dur
int durSomCurto = 40;

void setup()
{

}

void loop()
{
  int dado = random(0, 10);

  if (dado < 5)
  {
    tone(pinSpeaker, 100, durSomLongo);
    delay(delayTime);
    tone(pinSpeaker, 150, durSomLongo);
    delay(delayTime);
    tone(pinSpeaker, 180, durSomLongo);
    delay(delayTime);
    tone(pinSpeaker, 120, durSomLongo);
    delay(delayTime);
  }

  if (dado > 5)
  {
    tone(pinSpeaker, 300, durSomCurto);
    delay(delayTime);
    tone(pinSpeaker, 350, durSomCurto);
    delay(delayTime);
    tone(pinSpeaker, 480, durSomCurto);
    delay(delayTime);
    tone(pinSpeaker, 450, durSomCurto);
    delay(delayTime);
  }
}
