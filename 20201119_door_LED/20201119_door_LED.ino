int echoPin = 4;
int trigPin = 5;
float Time,distance;

void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);

}

void loop() {
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  Time = pulseIn(echoPin,HIGH); 
  distance = ((float)(390*Time) / 10000) / 2;
  if(distance<=15)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(10000);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);    
  }
}
