int potValue; //A variable to store the light sensor data.
void setup() {
   Serial.begin(9600);
}
void loop() {
    potValue = analogRead(A0);
    Serial.println(potValue);
}
