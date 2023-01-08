int ledPin=9;
int bright01=0;
int bright02=20;
int bright03=40;
int bright04=60;
int bright05=80;
int bright06=100;
int bright07=120;
int bright08=140;
int bright09=160;
int bright10=255;
int wait=50;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(ledPin,bright01);
delay(wait);
analogWrite(ledPin,bright02);
delay(wait);
analogWrite(ledPin,bright03);
delay(wait);
analogWrite(ledPin,bright04);
delay(wait);
analogWrite(ledPin,bright05);
delay(wait);
analogWrite(ledPin,bright06);
delay(wait);
analogWrite(ledPin,bright07);
delay(wait);
analogWrite(ledPin,bright08);
delay(wait);
analogWrite(ledPin,bright09);
delay(wait);
analogWrite(ledPin,bright10);
delay(wait);
}
