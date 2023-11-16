int LED0 = 5;
int LED1 = 6;

long LED0_PERIOD = 500;
long LED1_PERIOD = 250;

void setup() {
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  int led0Val = (millis() / LED0_PERIOD) % 2;
  int led1Val = (millis() / LED1_PERIOD) % 2;
  digitalWrite(LED0, led0Val);
  digitalWrite(LED1, led1Val);
  delay(1);
}
