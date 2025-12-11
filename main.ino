const int redPin = 11;
const int yellowPin = 10;
const int greenPin = 9;

const int redTime = 5000;
const int yellowTime = 3000;
const int greenTime = 5000;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
}

void loop() {
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(redTime);

  digitalWrite(redPin, LOW);
  
  for (int i = 0; i < 6; i++) {
    digitalWrite(yellowPin, HIGH);
    delay(500);
    digitalWrite(yellowPin, LOW);
    delay(500);
  }

  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(greenTime);

  digitalWrite(greenPin, LOW);
  
  for (int i = 0; i < 6; i++) {
    digitalWrite(yellowPin, HIGH);
    delay(500);
    digitalWrite(yellowPin, LOW);
    delay(500);
  }
}c
