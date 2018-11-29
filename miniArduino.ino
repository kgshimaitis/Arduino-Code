
int LED = 3;
int gLED= 4;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(gLED, OUTPUT);
  
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED, HIGH);
delay(1000);
digitalWrite(LED, LOW);
delay(1000);

digitalWrite(gLED, HIGH);
delay(2000);
digitalWrite(gLED, LOW);
delay(2000);

}
