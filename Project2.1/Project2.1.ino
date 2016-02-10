//This is very similar to the blinking led program

int buzzer = 10;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(buzzer, LOW);   
  delay(1000);
  digitalWrite(buzzer, HIGH);    
  delay(1000);              
}
