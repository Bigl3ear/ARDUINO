void setup() {
  pinMode(8,INPUT);//BUTTON
  pinMode(9,OUTPUT);//GREEN

}

void loop() {
  if(digitalRead(8)== HIGH)// == 같다
    digitalWrite(9,HIGH);
  else
    digitalWrite(9,LOW); 

}
