int pinSpeaker = 7;
int delayTime = 180;
int dur;

void setup()
{

}

void loop()
{
  int coinToss = random(0, 2);

  if (coinToss == 0)
  {
    dur = 40;
  }
  else
  {
    dur = 180;  
  }

//  same as:
//  if (coinToss == 1)
//  {
//    dur = 180;  
//  }
  
  tone(pinSpeaker,65, dur);
  delay(delayTime);
  tone(pinSpeaker,82, dur);
  delay(delayTime);
  tone(pinSpeaker,98, dur);
  delay(delayTime);
  tone(pinSpeaker,123, dur);
  delay(delayTime);
  tone(pinSpeaker,130, dur);
  delay(delayTime);
  tone(pinSpeaker,123, dur);
  delay(delayTime);
  tone(pinSpeaker,98, dur);
  delay(delayTime);
  tone(pinSpeaker,82, dur);
  delay(delayTime);
}
