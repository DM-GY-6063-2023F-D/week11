int cCount;
int prevV2;

void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
  cCount = 0;
  prevV2 = digitalRead(2);
}

void loop() {
  int v2 = digitalRead(2);

  cCount += (v2 == 1 && prevV2 == 0);
  prevV2 = v2;

  Serial.println(String(v2) + " " + String(cCount));
  delay(10);
}
