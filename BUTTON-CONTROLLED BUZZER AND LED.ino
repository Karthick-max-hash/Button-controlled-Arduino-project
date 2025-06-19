

int button = 12;
int blinkLed = 6;
int buzzer = 5;
int alertLed = 13;

void setup() {
  pinMode(blinkLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(alertLed, OUTPUT);
  pinMode(button, INPUT_PULLUP);  // Uses internal pull-up resistor
}

void loop() {
  // Blinking LED (always on/off)
  digitalWrite(blinkLed, HIGH);
  delay(500);
  digitalWrite(blinkLed, LOW);
  delay(500);

  // Button-controlled LED + Buzzer
  if (digitalRead(button) == LOW) {  // LOW = button pressed in pull-up mode
    digitalWrite(buzzer, HIGH);
    digitalWrite(alertLed, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(alertLed, LOW);
  }
}


