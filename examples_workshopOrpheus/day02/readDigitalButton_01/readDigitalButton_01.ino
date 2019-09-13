int pinButton = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(pinButton, INPUT);
}

void loop()
{
  int buttonState = digitalRead(pinButton);
  
  Serial.println(buttonState);
}
