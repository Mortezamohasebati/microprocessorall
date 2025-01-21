int ledPin = 9;
int brightness = 0; 
int fadeAmount = 5; 
void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {

   for (brightness = 0; brightness <= 255; brightness += fadeAmount) {
    analogWrite(ledPin, brightness); 
    delay(10);
  }

  
  for (brightness = 255; brightness >= 0; brightness -= fadeAmount) {
    analogWrite(ledPin, brightness); 
    delay(10); 
  }
}