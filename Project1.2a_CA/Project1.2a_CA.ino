// the setup function runs once when you press reset or power the board

void setup() {
  
  // initialize digital pin 7 as an output.
  
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever

void loop() {

  // turn the LED on (Since the LED used is a common anode LED, LOW signal turns the LED on)

  digitalWrite(7, LOW);   

  // for common cathode type LED signal would be HIGH instead of LOW to turn on the LED  

}
