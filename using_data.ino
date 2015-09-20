int fadeLedPin = 11;
int fadeAmount; //A variable to store the brightness of the LED.
int potPin = A0;
int potValue; //A variable to store the light sensor data.
void setup() {
   Serial.begin(9600);
}
void loop() {
    potValue = analogRead(potPin);
    fadeAmount = map(potValue, 0, 1023, 0, 255);
    Serial.println(fadeAmount);
    analogWrite(fadeLedPin, fadeAmount);
}
