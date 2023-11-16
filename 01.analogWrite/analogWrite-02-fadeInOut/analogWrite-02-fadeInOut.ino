int LED = 5;

int ledVal;
int ledDir;

void setup() {
  ledVal = 0;
  ledDir = 1;
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, ledVal);

  ledVal = (ledVal + ledDir);

  if (ledVal >= 255 || ledVal <= 0) {
    ledDir *= -1;
  }

  delay(8);
}
