int pinSpeaker = 7;
int delayTime = 100;
int dur = 90;
int randMax = 55;

void setup()
{

}

void loop()
{
  int freqGliss = random(50, randMax);
  
  tone(pinSpeaker, freqGliss, dur);
  delay(delayTime);

  randMax = randMax + 5;

  if (randMax > 500)
  {
    randMax = 55;  
  }
}
