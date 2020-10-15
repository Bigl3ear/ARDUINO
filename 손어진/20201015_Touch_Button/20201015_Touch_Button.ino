void setup() {
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(19200);

}

void loop() {
  Serial.println(digitalRead(7));
  Serial.println(digitalRead(8));
  
  if(digitalRead(7) == 1)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  if(digitalRead(8) == 1)
  {
    digitalWrite(11,HIGH);
  }
  else
  {
    digitalWrite(11,LOW);
  }

}
