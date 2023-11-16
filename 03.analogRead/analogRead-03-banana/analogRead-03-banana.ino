#include <CapacitiveSensor.h>

CapacitiveSensor mBanana = CapacitiveSensor(10, 5);

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
  long cap = mBanana.capacitiveSensor(10);
  Serial.println(cap);

  if (cap > 1000) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  delay(10);
}
