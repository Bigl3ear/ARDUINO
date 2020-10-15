void setup() {
  pinMode(9,OUTPUT);//RED
  pinMode(10,OUTPUT);//GREEN
  pinMode(11,OUTPUT);//BLUE
}

void loop() {
  digitalWrite(9,HIGH);
  delay(7000);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(5000);
  digitalWrite(9,HIGH);
  delay(2000);
  digitalWrite(10,LOW);
}
