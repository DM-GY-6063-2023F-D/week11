int LED0 = 5;

void setup() {
  pinMode(LED0, OUTPUT);
}

void loop() {
  digitalWrite(LED0, HIGH);
  delay(500);
  digitalWrite(LED0, LOW);
  delay(500);
}
