#include <Servo.h>

Servo servo1; Servo servo2; Servo servo3;
int led1 = 12; int led2 = 13; int tombol1 = 2; int tombol2 = 8;

void setup() {
  Serial.begin(115200);
  servo1.attach(9); servo2.attach(10);  servo3.attach(11);
  pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); pinMode(tombol2, INPUT_PULLUP);
  servo1.write(0); servo2.write(0); servo3.write(0);
}

void loop() {
  int button1 = digitalRead(tombol1);  int button2 = digitalRead(tombol2);
  if (button1 == 0) {
    servo1.write(90); servo2.write(90); digitalWrite(led1, HIGH);
  }
  else {
    servo1.write(0); servo2.write(0); digitalWrite(led1, LOW);
  }
  if (button2 == 0) {
    servo3.write(90); digitalWrite(led2, HIGH);
  }
  else {
    servo3.write(0); digitalWrite(led2, LOW);
  }
}
