class Blinky {
private:
  int pin;
  int halfPeriod;
  int lastUpdate;
  int currentVal;

public:
  Blinky() {}

  void setup(int _pin, int _halfPeriod) {
    pin = _pin;
    halfPeriod = _halfPeriod;

    currentVal = 0;
    lastUpdate = 0;

    pinMode(pin, OUTPUT);
    digitalWrite(pin, currentVal);
  }

  void update() {
    int now = millis();
    if (now - lastUpdate > halfPeriod) {
      currentVal = !currentVal;
      lastUpdate = now;
    }
    digitalWrite(pin, currentVal);
  }
};

Blinky mBlinky[] = {
  Blinky(),
  Blinky()
};

void setup() {
  for (int i = 0; i < 2; i++) {
    int hp = (i + 1) * 150;
    mBlinky[i].setup(i + 5, hp);
  }
}

void loop() {
  for (int i = 0; i < 2; i++) {
    mBlinky[i].update();
  }
}
