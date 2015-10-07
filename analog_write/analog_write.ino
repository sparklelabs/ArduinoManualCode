byte x;
void setup() { 
} 
void loop() {
  x = x+1;
  analogWrite(11, x);
  delay(10);
}
