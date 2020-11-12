#include <Servo.h>

int echoPin = 4;
int trigPin = 5;
float Time,distance;// int = 정수, float = 실수
Servo servo;

void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  servo.attach(3);

}

void loop() {
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  Time = pulseIn(echoPin,HIGH); // pulseIn = 시간재기
  distance = ((float)(390*Time) / 10000) / 2;        // 390 = 초음파속도
  Serial.print(distance);
  Serial.println("Cm");

  if(distance <= 30)
  {
    servo.write(180);
    Serial.println("문이 열렸습니다.");

  }
  else if(distance >= 30)
  {
    servo.write(0);

  }

}
