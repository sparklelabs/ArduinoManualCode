int ledPin = 13; 
int buttonPin = 2; //The pin we will put the button on 
int buttonState; //A variable to store the button reading. 
void setup() { 
  pinMode(ledPin, OUTPUT); 
  //We do not set buttonPin because pins start out as INPUT. 
  Serial.begin(9600); 
} 
void loop() { 
  // Next we store the reading from the button in the "buttonState" folder.
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) { //if connected to power do the following.
    digitalWrite(ledPin, HIGH);
  } else { //otherwise do the following.
    digitalWrite(ledPin, LOW);
  }
}
