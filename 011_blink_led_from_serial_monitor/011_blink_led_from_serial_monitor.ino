int myNumber;
int pause=500;
int ledPin=12;
int i;
String msg="Ile razy mam mrugać?";
String msg2="Your number is: ";

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){

  }

  myNumber=Serial.parseInt();
  for(i=1; i<=myNumber; i++){
    digitalWrite(ledPin,HIGH);
    delay(pause);
    digitalWrite(ledPin,LOW);
    delay(pause);
  }
}
