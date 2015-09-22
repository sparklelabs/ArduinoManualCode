int x = 0;
int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  x = x + 1;
  if (x == 30000) {
    digitalWrite(ledPin, HIGH);
  }
  if (x == 0) {
    digitalWrite(ledPin, LOW);
    x = 0;
  }
  //The serial port slows your program down so comment it out.
//Serial.println(x);
}
