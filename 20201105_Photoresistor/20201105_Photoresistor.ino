int score = 0;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  score = analogRead(A1);
  Serial.println(score);
  if(score >= 500)
  {
    digitalWrite(13,LOW);
  }
  else if(score <= 300)
  {
    digitalWrite(13,HIGH);
  }

}
