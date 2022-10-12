#include <Servo.h>
Servo servo_a;  
Servo servo_b;

#define SERVO_PIN_A 26
#define SERVO_PIN_B 25

int pino_x = 34; //Pino ligado ao X do joystick
int pino_y = 35; //Pino ligado ao Y do joystick
int val_x;   //Armazena o valor do eixo X
int val_y;   //Armazena o valor do eixo Y


void setup() {
  Serial.begin(9600);
  servo_a.attach(SERVO_PIN_A);

  servo_b.attach(SERVO_PIN_B);
  servo_a.write(90);
  servo_b.write(90);
  Serial.println("Setando posição dos Servos");
}

void loop() {   
  val_x = analogRead(pino_x);
  Serial.println(val_x);
  val_x = map(val_x, 0, 4095, 1, 180);
  Serial.println(val_x);
  val_y = analogRead(pino_y);
  val_y = map(val_y, 1, 718, 1, 180);
  
  delay(30);
  servo_a.write(val_x);
  delay(30);
  servo_b.write(val_y);
  delay(30);
}
