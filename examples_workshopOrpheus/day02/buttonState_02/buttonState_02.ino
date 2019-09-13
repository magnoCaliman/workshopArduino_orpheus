int pinButton = 5;
int pinSpeaker = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(pinButton, INPUT);
}

void loop()
{
  bool buttonState = digitalRead(pinButton);

  if (buttonState == HIGH)
  {
    tone(pinSpeaker, 100);
//    tone(pinSpeaker, random(100, 2000)); //noise. how to get a different
                                         //tone for every button press
  } 
  else 
  {
    noTone(pinSpeaker);    
  }
  
  Serial.println(buttonState);
}
