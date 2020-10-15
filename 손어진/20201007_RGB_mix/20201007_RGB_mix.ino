void setup() {
  pinMode(9,OUTPUT);//RED
  pinMode(10,OUTPUT);//GREEN
  pinMode(11,OUTPUT);//BLUE

}

void loop() {
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  
 
}
