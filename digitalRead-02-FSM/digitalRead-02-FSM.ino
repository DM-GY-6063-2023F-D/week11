int BUTTON_0 = 0;
int BUTTON_1 = 1;

int cState = BUTTON_0;

int cCount = 0;

void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
  cCount = 0;
}

void loop() {
  int v2 = digitalRead(2);

  if (cState == BUTTON_0 && v2 == 1) {
    cState = BUTTON_1;
    cCount += 1;
  } else if (cState == BUTTON_1 && v2 == 0) {
    cState = BUTTON_0;
  }

  Serial.println(String(v2) + " " + String(cCount));
  delay(10);
}
