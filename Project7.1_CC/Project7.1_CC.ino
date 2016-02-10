int LED = 7; 
int soundSensor = 8;     
boolean toggle = false;
int state; 
   
void setup()
{
  pinMode(LED,OUTPUT);    
}

void loop()
{
  // When you power up your arduino, boolean "toggle" is set to false
  //so the following section of code will commence.  The "ELSE" is ignored for now.
  if (toggle == false)   
    { 
      // Turn the LED off
      digitalWrite(LED,LOW);        
      state = digitalRead(soundSensor);
      //if sound is sensed by the sensor toggle becomes true
      if (state==HIGH) 
      {
        toggle = true;
        delay(200);
      }
    }
    // If boolean "toggle" has beenchanged to true, then the above section of code will be ignored, and the code below will commence.
    else                            
    {
      // Turn the LED on
      digitalWrite(LED,HIGH);       
      state = digitalRead(soundSensor); 
      if (state==HIGH)
      {
        toggle = false;
        delay(200);
      }
    }
}
