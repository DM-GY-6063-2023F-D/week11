int LED[] = { 5, 6, 7 };
int VAL[] = { 16, 64, 200 };

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    analogWrite(LED[i], VAL[i]);
  }

  delay(10);
}
