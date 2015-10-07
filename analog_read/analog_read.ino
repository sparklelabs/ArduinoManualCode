int potValue; // A variable to store the potentiometer data. 
void setup() { 
  Serial.begin(9600); 
} 
void loop() {
  potValue = analogRead(A0); // Read and store the potentiometer value.
  Serial.println(potValue);
}
