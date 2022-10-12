#include <Servo.h>
Servo servo_a;  
Servo servo_b;

#define SERVO_PIN_A 26
#define SERVO_PIN_B 25


void setup() {
  Serial.begin(9600);
  servo_a.attach(SERVO_PIN_A);
  servo_b.attach(SERVO_PIN_B);
  servo_a.write(0);
  servo_b.write(180);
  Serial.println("Setando posição dos Servos");
}

void loop() {
    

  delay(1000);
  Serial.println("Servo A [0-180]");
  for (int pos = 0; pos <= 180; pos += 1) {
    servo_a.write(pos);
    delay(15);
  }
  delay(2000);
  Serial.println("Servo B [180-0]");
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo_b.write(pos);
    delay(15);
  }
  Serial.println("Servo A [180-0]");
  delay(1000);
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo_a.write(pos);
    delay(15);
  }
  Serial.println("Servo B [0-180]");
  for (int pos = 0; pos <= 180; pos += 1) {
    servo_b.write(pos);
    delay(15);
  }
}
