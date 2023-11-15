int LED0 = 5;
int LED1 = 6;

void setup() {
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  digitalWrite(LED0, HIGH);
  delay(500);
  digitalWrite(LED0, LOW);
  delay(500);

  digitalWrite(LED1, HIGH);
  delay(250);
  digitalWrite(LED1, LOW);
  delay(250);
}
