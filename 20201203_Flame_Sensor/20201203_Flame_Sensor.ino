int flame = 0;
void setup() {
  pinMode(A5,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  flame = analogRead(A5);
  Serial.println(flame);
  if(flame > 1000)
  {
    tone(6,659);
  }
  else
  {
    noTone(6);
  }

}
