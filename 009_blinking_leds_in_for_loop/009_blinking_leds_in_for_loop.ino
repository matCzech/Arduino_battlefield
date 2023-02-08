int yellowPin=6;
int redPin=9;
int pauseTime=500;
int yellowBlink=3;
int redBlink=5;
int i;

void setup() {
  // put your setup code here, to run once:
pinMode(yellowPin,OUTPUT);
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=1; i<=yellowBlink; i++){
    digitalWrite(yellowPin,HIGH);
    delay(pauseTime);
    digitalWrite(yellowPin,LOW);
    delay(pauseTime);
  }
for(i=1; i<=redBlink; i++){
    digitalWrite(redPin,HIGH);
    delay(pauseTime);
    digitalWrite(redPin,LOW);
    delay(pauseTime);
  }
}
