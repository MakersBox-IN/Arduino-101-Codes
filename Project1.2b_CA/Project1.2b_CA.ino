// the setup function runs once when you press reset or power the board

void setup() {

  // initialize digital pin 7 as an output.

  pinMode(7, OUTPUT);

}

// the loop function runs over and over again forever

void loop() {

  // turn the LED off (Since the LED used is a common anode LED, HIGH signal turns the LED off)

  digitalWrite(7, HIGH);   

  // for common cathode type LED signal would be LOW instead of HIGH to turn off the LED  

}
