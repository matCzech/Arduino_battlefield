int readPin=A3;
int redPin=2;
int yellPin=3;
int readVal;

void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(yellPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  Serial.println(readVal);
  delay(500);

  if(readVal >= 750){
    digitalWrite(redPin,HIGH); 
    digitalWrite(yellPin,LOW); 
  }else if(readVal >= 250){
    digitalWrite(redPin,LOW); 
    digitalWrite(yellPin,HIGH);
  }else{
    digitalWrite(redPin,LOW); 
    digitalWrite(yellPin,LOW);    
  }
}
