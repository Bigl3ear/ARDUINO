
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
      digitalWrite(GreenLED,HIGH);
      digitalWrite(RedLED,HIGH);
      digitalWrite(BlueLED,HIGH);
      Serial.println("White.");
    }
    if(input == '2')
    {
      digitalWrite(GreenLED,LOW);
      Serial.println("Magenta.");
    }
    if(input == '3')
    {
      digitalWrite(RedLED,LOW);
      digitalWrite(GreenLED,HIGH);
      Serial.println("Cyan.");
    }
    if(input == '4')
    {
      digitalWrite(BlueLED,LOW);
      digitalWrite(RedLED,HIGH);
      Serial.println("Yellow.");
    }
    if(input == '5')
    {
      digitalWrite(GreenLED,LOW);
      digitalWrite(RedLED,LOW);
      digitalWrite(BlueLED,LOW);
      Serial.println("OFF.");
    }
  }
}
