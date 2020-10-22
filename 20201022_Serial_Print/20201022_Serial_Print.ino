int led = 0; // int - 정수
char a = '가'; // char - 문자열
//LED
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
  Serial.println("Hello!!"); // print, println - 줄나눔(엔터기능)
  delay(500);
}
