int C = 523;
int D = 587;
int E = 659;
int F = 698;
int G = 783;
int A = 880;
int B = 987;
int HighC = 1046; 
void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);

}

void loop() {
  if(Serial.available())
  {
    char input = Serial.read();
    if(input == '1')
    {
      tone(6,C);
      delay(1000);
      noTone(6);
    }
    if(input == '2')
    {
      tone(6,D);
      delay(1000);
      noTone(6);
    }
    if(input == '3')
    {
      tone(6,E);
      delay(1000);
      noTone(6);
    }
    if(input == '4')
    {
      tone(6,F);
      delay(1000);
      noTone(6);
    }
    if(input == '5')
    {
      tone(6,G);
      delay(1000);
      noTone(6);
    }
    if(input == '6')
    {
      tone(6,A);
      delay(1000);
      noTone(6);
    }
    if(input == '7')
    {
      tone(6,B);
      delay(1000);
      noTone(6);
    }
    if(input == '8')
    {
      tone(6,HighC);
      delay(1000);
      noTone(6);
    }
  }
}
