#include <Servo.h> 

Servo myservo;

int LDR_Pin = A0; 
int sensorValue = 0;
int pos = 0;

void setup() 
{ 
  myservo.attach(10);  
} 


void loop() {
    sensorValue = analogRead(LDR_Pin);
    //Voltage is read between 0 to 1023 which is mapped to 0 to 179
    //for Servo motor as servo motor takes only till 180 degrees as position
    pos = map(sensorValue,0,1023,0,179);
    myservo.write(pos);
    delay(15);
}
