int score = 0;
int RED = 9;
int GREEN = 10;
int BLUE = 11;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  

}

void loop() {
  score = analogRead(A1);
  Serial.println(score);
  if(score <= 300)
  {
    digitalWrite(RED,HIGH);
    digitalWrite(GREEN,LOW);
  }
  else if(score <= 500)
  {
    digitalWrite(RED,LOW);
    digitalWrite(GREEN,HIGH);
    digitalWrite(BLUE,LOW);
  }
  else if(score <= 700)
  {
    digitalWrite(GREEN,LOW);
    digitalWrite(BLUE,HIGH);
    digitalWrite(RED,LOW);
  }
  else if(score <= 900)
  {
    digitalWrite(BLUE,LOW);
    digitalWrite(GREEN,HIGH);
    digitalWrite(RED,HIGH);
  }
  else if(score > 900)
  {
    digitalWrite(BLUE,HIGH);
    digitalWrite(GREEN,HIGH);
    digitalWrite(RED,HIGH);
  }

}
