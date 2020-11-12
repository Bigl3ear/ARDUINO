int abc = 0;
int LED = 13;
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);

}

void loop() {
  abc = analogRead(A0);
  Serial.println(abc); //abc 500 이상이면 불을 켜지게 만들자
  if(abc>=500)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }

}
