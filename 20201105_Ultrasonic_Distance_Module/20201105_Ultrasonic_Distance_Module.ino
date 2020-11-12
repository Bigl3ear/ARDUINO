int echoPin = 4;
int trigPin = 5;
float Time,distance; // int = 정수, float = 실수

void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600);
  pinMode(6,OUTPUT);

}

void loop() {
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  Time = pulseIn(echoPin,HIGH); // pulseIn = 시간재기
  distance = ((float)(390*Time) / 10000) / 2;        // 390 = 초음파속도
  Serial.print(distance);
  Serial.println("Cm");
  if(distance <= 30 && distance >=15)
  {
    tone(6,440);
    delay(500);
    noTone(6);
    delay(500);
  }
  else if(distance <= 15 && distance >=5)
  {
    tone(6,440);
    delay(250);
    noTone(6);
    delay(250);
  }
  else if(distance <= 5)
  {
    tone(6,440);
    delay(100);
    noTone(6);
    delay(100);
  }

}
