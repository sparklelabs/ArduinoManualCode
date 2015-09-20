int ledPin = 13;
int buttonPin = 2; //The pin we will put the button on
int buttonState; //A variable to store the state of the button when we read it.
void setup() {
   pinMode(ledPin, OUTPUT); 
   //We do not have to set pin 2 as INPUT because pins start out as INPUT.
   Serial.begin(9600);
}
void loop() {
   buttonState = digitalRead(buttonPin);
   if (buttonState == HIGH) {
      digitalWrite(ledPin, HIGH);
   } else {
      digitalWrite(ledPin, LOW);
   }
    //Serial.println(ledPin);
}
