int BlueLed=9; 
int GreenLed=8; 
int RedLed=7; 
int Button=10;  

boolean button_pressed = LOW;  

int ledColor=0;  

void setup() 
{ 
  pinMode(BlueLed,OUTPUT); 
  pinMode(GreenLed,OUTPUT); 
  pinMode(RedLed,OUTPUT); 
  pinMode(Button,INPUT); 
}

void colorSet(int color) 
{  
  if(color==1) 
  { 
    digitalWrite(RedLed,LOW); 
    digitalWrite(GreenLed,HIGH);  
    digitalWrite(BlueLed,HIGH); 
  } 
  else if(color==2) 
  { 
    digitalWrite(RedLed,HIGH); 
    digitalWrite(GreenLed,LOW);  
    digitalWrite(BlueLed,HIGH); 
  } 
  else if(color==3) 
  { 
    digitalWrite(RedLed,HIGH); 
    digitalWrite(GreenLed,HIGH);  
    digitalWrite(BlueLed,LOW);  
  }  
} 

void loop() 
{ 
  button_pressed=digitalRead(Button);
  if(ledColor>=3) 
  {
    ledColor=0;   
  }
  
  if (button_pressed)
  { 
        ledColor++;
    colorSet(ledColor); 
    delay(500); 
  } 
     
}
