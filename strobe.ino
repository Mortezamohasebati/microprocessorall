const int ledPins[] = {2, 3, 4, 5, 6};
const int buttonPin = A0;
bool buttonState = LOW;

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    lightSequence();
  }
}

void lightSequence() {
  digitalWrite(ledPins[0], HIGH);
  delay(500);
  
  digitalWrite(ledPins[1], HIGH);
  delay(500);
  
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(500);
  
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(500);
  
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[4], HIGH);
  delay(500);
  
  digitalWrite(ledPins[3], LOW);
  delay(500);
  
  digitalWrite(ledPins[4], LOW);
}