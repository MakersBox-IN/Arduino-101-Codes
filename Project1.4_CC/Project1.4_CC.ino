//assigning variables to pin numbers as names are easy to remember
int redPin = 9;    
int greenPin = 10;   
int bluePin = 11;   

void setup()
{
pinMode(redPin, OUTPUT);   
pinMode(greenPin, OUTPUT);   
pinMode(bluePin, OUTPUT);   
}

//function to cycle through all brightness levels of red coloured led
void red()
{
  //looping through all brightness levels
  for(int i=0;i<=255;i+=5)
  {analogWrite(redPin, i);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  //delay of 200 milliseconds between each brightness level
  delay(200);
  }
}

//function to cycle through all brightness levels of blue coloured led
void blue()
{
  for(int i=0;i<=255;i+=5)
  {analogWrite(bluePin, i);
  analogWrite(greenPin, 0);
  analogWrite(redPin, 0);
  delay(200);
  }
}

//function to cycle through all brightness levels of green coloured led
void green()
{
  for(int i=0;i<=255;i+=5)
  {analogWrite(greenPin, i);
  analogWrite(redPin, 0);
  analogWrite(bluePin, 0);
  delay(200);
  }
}

void loop()   
{
  red();
  delay(500);
  green();
  delay(500);
  blue();
  delay(500);
}
