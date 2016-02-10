const int touchPin = 7;    
const int buzzPin =  10;      


int touchState = 0;         

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(touchPin, INPUT);
}

void loop() {
  touchState = digitalRead(touchPin);
  if (touchState == HIGH) {
    digitalWrite(buzzPin, HIGH);
  }
  else {
    digitalWrite(buzzPin, LOW);
  }
}
