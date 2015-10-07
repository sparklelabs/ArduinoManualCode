int fadeLedPin = 11; 
int fadeAmount; // A variable to store the brightness of the LED. 
int potPin = A0; 
int potValue; // A variable to store the pot data. 
void setup() { 
  Serial.begin(9600); 
} 
void loop() {
  potValue = analogRead(potPin); // Read the potentiometer
  fadeAmount = map(potValue, 0, 1023, 0, 255); // map the value to 0-255
  Serial.println(fadeAmount);
  analogWrite(fadeLedPin, fadeAmount); // Send the value to the LED.
} 
