void setup() {
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(8));
  delay(500);
  

}
