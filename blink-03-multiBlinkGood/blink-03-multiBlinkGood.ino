int LED0 = 5;
int LED1 = 6;

long LED0_PERIOD = 500;
long LED1_PERIOD = 250;

long led0LastUpdate = 0;
long led1LastUpdate = 0;

int led0Val = 0;
int led1Val = 0;

void setup() {
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  long now = millis();

  if (now - led0LastUpdate > LED0_PERIOD) {
    led0Val = !led0Val;
    digitalWrite(LED0, led0Val);
    led0LastUpdate = now;
  }

  if (now - led1LastUpdate > LED1_PERIOD) {
    led1Val = !led1Val;
    digitalWrite(LED1, led1Val);
    led1LastUpdate = now;
  }
}
