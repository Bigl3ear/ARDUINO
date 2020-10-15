void setup() 
{
  pinMode(13,OUTPUT); //pinMode - 부품, 핀 선언. output - 출력. input - 입력
 
}

void loop() 
{
  digitalWrite(13,LOW); //high = 1, low = 0
  delay(13); //1000 = 1초
  digitalWrite(13,HIGH);
  delay(13);
}
