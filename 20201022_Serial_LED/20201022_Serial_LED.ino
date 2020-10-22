
int RedLED = 9;
int GreenLED = 10;
int BlueLED = 11;
void setup() {
  Serial.begin(9600); // serial monitor on
  pinMode(RedLED,OUTPUT);
  pinMode(GreenLED,OUTPUT);
  pinMode(BlueLED,OUTPUT);

}

void loop() {
  if(Serial.available()>0); // 시리얼 모니터에서 입력받으면
  {
    char input = Serial.read();
    if(input == '1')
    {
      digitalWrite(RedLED,HIGH);
      Serial.println("Ready.");
    }
    if(input == '2')
    {
      digitalWrite(GreenLED,HIGH);
      Serial.println("Set...");
    }
    if(input == '3')
    {
      digitalWrite(RedLED,LOW);
      Serial.println("Go!");
    }
    if(input == '4')
    {
      digitalWrite(RedLED,LOW);
      digitalWrite(GreenLED,LOW);
      Serial.println("OFF");
    }
  }
}
