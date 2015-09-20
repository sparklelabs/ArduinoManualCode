int x = 0; // This creates a folder named x and stores 0 inside it.
void setup() {
  pinMode(13, OUTPUT);
   Serial.begin(9600);
}
void loop() {
  digitalWrite(13, HIGH);
  x = x + 1;
  Serial.println(x);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
