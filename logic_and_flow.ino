int ledPin = 13;
int ledState;
int buttonPin = 2; //The pin we will put the button on
int buttonState; //A variable to store the state of the button when we read it.
int prevButtonState = LOW;
int fadeLedPin = 11;
int fadeAmount; //A variable to store the brightness of the LED.
int potPin = A0;
int potValue; //A variable to store the light sensor data.
int x = 0; // This creates a folder named x and stores 0 inside it.
void setup() {
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
}
void loop() {
   // Get data from inputs:
   buttonState = digitalRead(buttonPin);
   potValue = analogRead(potPin);
   // Logic
   if (buttonState == HIGH && prevButtonState == LOW) {
      delay(5);
      x = x + 1;
      if (x >= 3) x = 0;
   }
   prevButtonState = buttonState;
   switch (x) {
      case 0:
         ledState = HIGH;
         fadeAmount = 1;
         break;
      case 1:
         ledState = LOW;
       fadeAmount = map(potValue, 0, 1023, 0, 255);
         break;
      case 2:
         if (potValue >= 512) {
            ledState = HIGH;
        } else {
           ledState = LOW;
        }
         fadeAmount = 1023;
         break;
   }
   // Send output:
   Serial.println(fadeAmount);
   analogWrite(fadeLedPin, fadeAmount);
   digitalWrite(ledPin, ledState);
}
