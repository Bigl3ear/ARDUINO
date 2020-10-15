void setup() {
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(19200);

}

void loop() {
  Serial.println(digitalRead(8));
  
  if(digitalRead(8) == 1)
  {
    digitalWrite(9,HIGH);
    delay(1000);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(11,LOW);
  }
  if(digitalRead(8) == 0)
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
}
