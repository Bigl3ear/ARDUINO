#include <Servo.h>
Servo servo; 

void setup() {
  servo.attach(3);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available())
  {
    int angle = Serial.read();
    if(angle == '1')
    {
      servo.write(30);
    }
    if(angle == '2')
    {
      servo.write(60);
    }
    if(angle == '3')
    {
      servo.write(90);
    }
  }
}
