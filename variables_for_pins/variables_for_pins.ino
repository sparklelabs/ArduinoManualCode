int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
   //Serial.begin(9600);
}
void loop() {
  digitalWrite(ledPin, HIGH);
  //Serial.println(ledPin);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
