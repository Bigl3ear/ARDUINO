int abc = 0;
int LED = 13;
int RED = 9;
int GREEN = 10;
int BLUE = 11;
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);

}

void loop() {
  abc = analogRead(A0);
  Serial.println(abc); //abc 500 이상이면 불을 켜지게 만들자
  if(abc<50)//이상 >=, 초과 >, 이하 <=, 미만 <, 같다 ==
  {
    digitalWrite(RED,HIGH);
    digitalWrite(GREEN,HIGH);
    digitalWrite(BLUE,HIGH);
  }
  else if(abc<500)
  {
    digitalWrite(GREEN,LOW);
    digitalWrite(BLUE,LOW);
    digitalWrite(RED,HIGH);
  }
  else if(abc<700)
  {
    digitalWrite(RED,LOW);
    digitalWrite(BLUE,HIGH);
    digitalWrite(GREEN,LOW);
  }
  else if(abc<900)
  {
    digitalWrite(BLUE,LOW);
    digitalWrite(GREEN,HIGH);
    digitalWrite(RED,LOW);
  }
  else if(abc<1023)
  {
    digitalWrite(RED,HIGH);
  }

}
