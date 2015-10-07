byte x; // a byte can only go up to 255
void setup() { 
} 
void loop() {
  x = x+1;
  analogWrite(11, x); // Send a pulse to pin 11 of value x.
  delay(10);
}
