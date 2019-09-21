int pinButton = 5;
int pinSpeaker = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(pinButton, INPUT);
}

void loop()
{
  int buttonState = digitalRead(pinButton);
  
  if (buttonState == HIGH)
  {
    tone(pinSpeaker, 400);
  }
  else
  {
    noTone(pinSpeaker);
  }
  
  Serial.println(buttonState);
}
