int GREEN = 10;
int RED = 9;
int buzzer = 6;
int light = 0;
char number = 0;
void setup() {
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  light = analogRead(A1);
  Serial.println(light);
  if(Serial.available())
  {
    char input = Serial.read();
    if(input == '1')
    {
      number = '2';
    }  
    if(input == '2')
    {
      number = '1';
    }
  }
  if(number == '2')
  {
    if(light <=300)
      {
        digitalWrite(GREEN,HIGH);
        digitalWrite(RED,LOW);
      }
      else if(light > 300)
      {
        digitalWrite(GREEN,LOW);
        digitalWrite(RED,HIGH);
        tone(buzzer,700);
        delay(500);
        noTone(buzzer);
        delay(500);
        Serial.println("도난발생!");
      }    
  }
  else
  {
    Serial.println("도난방지꺼짐.");
  }  
}
