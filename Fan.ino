int fanPin = 3; //Green
int ledPin = 6; //Yellow
int buttonPin = 5; //Blue

boolean fanOn = false;
boolean ledOn = false;

void setup() {
  pinMode(fanPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    delay(50);
    if (digitalRead(buttonPin) == LOW) {
      fanOn = !fanOn;
      ledOn = !ledOn;
      digitalWrite(fanPin, fanOn);
      digitalWrite(ledPin, ledOn);
      while (digitalRead(buttonPin) == LOW) {
        delay(50);
      }
    }
  }
}
