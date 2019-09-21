import processing.serial.*;

Serial arduinoConnection;
float rectSize;
int mnsgArduino;

void setup()
{
  arduinoConnection = new Serial(this, "/dev/cu.usbmodem14101", 9600);
  
  size(400, 400);
  rectMode(CENTER);
  background(255);
  stroke(0, 32);
}

void draw()
{ 
  rectSize = map(mnsgArduino, 0, 255, 0, width);
  rect(width/2, height/2, rectSize, rectSize);
  //line(rectSize, height/3, random(width), random(height));
}

void serialEvent(Serial portaSerial)
{
  mnsgArduino = portaSerial.read();
  println("incoming value: " + mnsgArduino);
}
