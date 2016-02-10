//Servo is controlled using a built in Servo library
#include <Servo.h> 

// create servo object to control a servo
// twelve servo objects can be created on most boards 
Servo myservo;  
                
// variable to store the servo position  
int pos = 0;    
 
void setup() 
{ 
  // attaches the servo on pin 7 to the servo object 
  myservo.attach(7);  
} 
 
void loop() 
{ 
  // goes from 0 degrees to 180 degrees 
  // in steps of 1 degree 
  for(pos = 0; pos <= 180; pos += 1) 
  {                                  
    // tell servo to go to position in variable 'pos'
    myservo.write(pos);               
    delay(15);                       
  } 
  // goes from 180 degrees to 0 degrees 
  for(pos = 180; pos>=0; pos-=1)     
  {                                
    // tell servo to go to position in variable 'pos' 
    myservo.write(pos);              
    delay(15);                       
  } 
} 
