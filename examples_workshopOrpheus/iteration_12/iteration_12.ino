int pinSpeaker = 7;
int freq = 31;

void setup()
{

}

void loop()
{
  tone(pinSpeaker, freq);

  freq = freq + 1;

  delay(500);
}
