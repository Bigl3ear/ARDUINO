int buzzer = 6;//도-523, 레-587, 미-659
void setup() {
  pinMode(buzzer,OUTPUT);
  pinMode(8,INPUT);

}

void loop() {
  if(digitalRead(8)==HIGH)
  {
   tone(buzzer,659);
   delay(500);
   tone(buzzer,587);
   delay(500);
   tone(buzzer,523);
   delay(500);
   tone(buzzer,587);
   delay(500);
   tone(buzzer,659);
   delay(1500);
   tone(buzzer,587);
   delay(1500);
   tone(buzzer,659);
   delay(1500);
   tone(buzzer,659);
   delay(500);
   tone(buzzer,587);
   delay(500);
   tone(buzzer,523);
   delay(500);
   tone(buzzer,587);
   delay(500);
   tone(buzzer,659);
   delay(1500);
   tone(buzzer,587);
   delay(1000);
   tone(buzzer,659);
   delay(500);
   tone(buzzer,587);
   delay(500);
   tone(buzzer,523); 
  }
  else
  {
    tone(buzzer,0);
  }

  

}
