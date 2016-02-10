// the value of the 'other' resistor
#define SERIESRESISTOR 10000     
// What pin to connect the sensor to
#define THERMISTORPIN A0 

int BlueLed=10; 
int GreenLed=11; 
int RedLed=9;
float t;
 
void setup() {
  pinMode(BlueLed,OUTPUT); 
  pinMode(GreenLed,OUTPUT); 
  pinMode(RedLed,OUTPUT); 
}

//function to return temperature value
float temperature()
{ 
  //converting voltage into temperature value
  float reading;
  reading = analogRead(THERMISTORPIN);
  reading = (1023 / reading)  - 1;
  reading = log(SERIESRESISTOR * reading);
  reading = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * reading * reading ))* reading );
  reading = reading - 273.15;
  return reading;
}

//function to set colour according to temperature
void colorSet(float temp) 
{ 
  //from 0-13 degrees the led changes color from aqua to blue 
  if(temp<=13) 
  { 
    analogWrite(RedLed,(temp)*19); 
    analogWrite(GreenLed,0);  
    analogWrite(BlueLed,0); 
  }
  //13-26 degrees - blue to green 
  else if(temp<=26) 
  { 
    analogWrite(RedLed,255); 
    analogWrite(GreenLed,0);  
    analogWrite(BlueLed,(temp -13)*19); 
  } 
  //26-39 degrees - green to yellow
 else if(temp<=39) 
  { 
    analogWrite(RedLed,(39-temp)*19); 
    analogWrite(GreenLed,0);  
    analogWrite(BlueLed,255);  
  } 
  //39-52 degrees - yellow to red
 else if(temp<=52) 
  { 
    analogWrite(RedLed,0); 
    analogWrite(GreenLed,(temp -39)*19);  
    analogWrite(BlueLed,255);  
  } 
}

void loop(void) {
  t=temperature();
  colorSet(t);
  delay(200);
}
