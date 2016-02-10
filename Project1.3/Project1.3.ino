void setup() {
  
  pinMode(7, OUTPUT);

}

void loop() {
  
  //turn on the LED if CA or turn off the LED if CC
  
  digitalWrite(7, LOW); 
  
  // wait for a second  
  
  delay(1000);
  
  //turn off the LED if CA or turn on the LED if CC
  
  digitalWrite(7, HIGH);
  
  //wait for a second    
  
  delay(1000);              

}
