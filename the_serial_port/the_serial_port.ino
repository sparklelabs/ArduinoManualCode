void setup() { 
  pinMode(13, OUTPUT); // Sit pin 13 to be an output pin.
  Serial.begin(9600); // Setup the serial port.
}
void loop() { 
  digitalWrite(13, HIGH); // Make pin 13 high.
  Serial.println("Hello world!"); // Write "Hello world!" to the serial port.
  delay(1000); // Wait 1 second.
  digitalWrite(13, LOW); // Make pin 13 low.
  delay(1000); // Wait 1 second.
}
