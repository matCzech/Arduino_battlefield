int ledPin=12;
int button=11;
int buttonRead;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead=digitalRead(button);
  Serial.println(buttonRead);
  delay(500);

  if(buttonRead==1){
    digitalWrite(ledPin,HIGH);   
  }else{
    digitalWrite(ledPin,LOW);
  }  
}
