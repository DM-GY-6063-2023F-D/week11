int BUTTON_0 = 0;
int BUTTON_1 = 1;
int cButtonState = BUTTON_0;

int IS_OPENING = 0;
int IS_CLOSING = 1;
int TO_OPEN = 2;
int TO_CLOSE = 3;
int cDoorState = TO_OPEN;

int M0 = 5;
int M1 = 6;

void setup() {
  pinMode(2, INPUT);
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int v2 = digitalRead(2);
  int click = false;

  if (cButtonState == BUTTON_0 && v2 == 1) {
    cButtonState = BUTTON_1;
    click = true;
  } else if (cButtonState == BUTTON_1 && v2 == 0) {
    cButtonState = BUTTON_0;
  }

  if (cDoorState == IS_OPENING) {
    digitalWrite(M0, 1);
    digitalWrite(M1, 0);
    if (click) {
      cDoorState = TO_CLOSE;
    }
  } else if (cDoorState == TO_CLOSE) {
    digitalWrite(M0, 0);
    digitalWrite(M1, 0);
    if (click) {
      cDoorState = IS_CLOSING;
    }
  } else if (cDoorState == IS_CLOSING) {
    digitalWrite(M0, 0);
    digitalWrite(M1, 1);
    if (click) {
      cDoorState = TO_OPEN;
    }
  } else if (cDoorState == TO_OPEN) {
    digitalWrite(M0, 0);
    digitalWrite(M1, 0);
    if (click) {
      cDoorState = IS_OPENING;
    }
  }

  delay(10);
}
