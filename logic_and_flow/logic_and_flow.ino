int ledPin = 13;
int ledState; // A variable to store the state of the LED
int buttonPin = 2; //The pin we will put the button on 
int buttonState; //A variable to store the button state when we read it. 
int prevButtonState = LOW; // The state of the button last time we checked it. 
int fadeLedPin = 11; // The pin for the fading LED.
int fadeAmount; // A variable to store the brightness of the LED. 
int potPin = A0; // Pin with the potentiometer
int potValue; // A variable to store the potentiometer data. 
int x = 0; // This creates a folder named x and stores 0 inside it. 

void setup() { 
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600); 
} 

void loop() { 

  // Get data from inputs: 
  buttonState = digitalRead(buttonPin); 
  potValue = analogRead(potPin); 

  // Logic:
  // If the button was low before and is high now:
  if (buttonState == HIGH && prevButtonState == LOW) {
    delay(10); // Let the button settle.
    x = x + 1; // Increment x.
    if (x >= 3) x = 0; // 3 is too high so back to 0.
  } 
  prevButtonState = buttonState; // Button was just high.
  switch (x) { // Go to the case with the number of x.
    case 0: // Do this one if x is 0.
      ledState = HIGH; // Turn on the LED.
      fadeAmount = 1; // Set the fade LED to 1.
      break;
    case 1: //  If x is 1:
      ledState = LOW; // Turn off the LED
      fadeAmount = map(potValue, 0, 1023, 0, 255); // Set the fade LED with pot
      break;
    case 2: // If x = 2:
      if (potValue >= 512) { // Turn the LED on/off with the pot.
        ledState = HIGH;
      } else {
        ledState = LOW;
      }
      fadeAmount = 1023; // Turn on the fade LED.
      break;
  } 

  // Send output:
  Serial.println(fadeAmount); 
  analogWrite(fadeLedPin, fadeAmount); 
  digitalWrite(ledPin, ledState); 
}
