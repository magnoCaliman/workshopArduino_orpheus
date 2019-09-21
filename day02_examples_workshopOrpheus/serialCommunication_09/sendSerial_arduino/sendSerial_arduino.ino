int pinPot = A0;
int potValue;

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  potValue = analogRead(pinPot);
//  potValue = map(potValue, 0, 1023/, 0, 255);

  Serial.println(potValue);
//  Serial.write(potValue);     //overflow 1023 > 255

  delay(100);
}
