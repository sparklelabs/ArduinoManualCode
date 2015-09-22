int x = 0;
int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(ledPin, HIGH);
  x = x + 1;
  Serial.println(x);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
