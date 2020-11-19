void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);

}

void loop() {
  int analogwing = 0;
  analogwing = analogRead(A0);
  Serial.println(analogwing);
  tone(6,analogwing);
  
  
  

}
