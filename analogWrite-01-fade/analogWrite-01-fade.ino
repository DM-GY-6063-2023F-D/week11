int LED = 5;

int ledVal;

void setup() {
  ledVal = 0;
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, ledVal);

  ledVal = (ledVal + 1) % 255;

  delay(16);
}
