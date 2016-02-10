int redPin = 9;    
int greenPin = 10;   
int bluePin = 11;   

void setup()
{

pinMode(redPin, OUTPUT);   
pinMode(greenPin, OUTPUT);   
pinMode(bluePin, OUTPUT);   
}

//function to set colour on the led
void color (int red, int green, int blue)
{
analogWrite(redPin, red);
analogWrite(bluePin, blue);
analogWrite(greenPin, green);
}

void loop()   
{
  color(0, 255, 255);   
  delay(500);    
  color(255,0, 255);    
  delay(500);    
  color(255, 255, 0);   
  delay(500);   
  color(0,0,255);    
  delay(500);    
  color(0,0,0);  
  delay(500);  
  color(128,255,0);   
  delay(500);    
  color(80,180,107);  
  delay(500);    
  color(18,136,249);   
  delay(500);   
  color(255,255,255);    
  delay(1000);  
}
