int pinoPot = A0; 
int pinoColuna = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(pinoPot, INPUT);
}                         
                         

void loop()
{
  int valorSensor = analogRead(pinoPot);
  int freq = map(valorSensor, 0, 1023, 50, 500);

  tone(pinoColuna, freq);
  
  Serial.println(freq);
  delay(10);
}
