#include <Servo.h>
int pos = 0;
Servo myservo;
char c;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);

  if (Serial.available() > 0) {
    c = Serial.read();
    digitalWrite(LED_BUILTIN, HIGH);
    for (pos = 0; pos <= 90; pos++) {
      myservo.write(pos);
      delay(15);
    }
  }
}
