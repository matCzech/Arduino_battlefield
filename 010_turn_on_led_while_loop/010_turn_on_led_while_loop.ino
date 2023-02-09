int potPin=A2;
int ledPin=10;
int potVal;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin,INPUT);
pinMode(ledPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  Serial.println(potVal);
  while(potVal>1000){
    digitalWrite(ledPin,HIGH);
    potVal=analogRead(potPin);
    Serial.println(potVal);
    delay(500);
  }
  digitalWrite(ledPin,LOW);

}
