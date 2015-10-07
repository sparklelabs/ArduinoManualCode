int x = 0; 
int ledPin = 13; // Creates a folder and puts 13 inside it.
void setup() { 
  pinMode(ledPin, OUTPUT); // Sends the command to the number in the folder
  Serial.begin(9600); 
} 
void loop() { 
  digitalWrite(ledPin, HIGH); // Makes pin 13 high.
  x = x + 1; 
  Serial.println(x); 
  delay(200); 
  digitalWrite(ledPin, LOW); // Makes pin 13 low.
  delay(200); 
}
