int myNumb;
int potVal;
int buzzPin=8;
int readVal=A3;
int wait=2000;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(readVal,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(readVal);
  Serial.println(potVal);  
  delay(500);

  if(potVal >= 1000){      
    digitalWrite(buzzPin,HIGH);
    delay(wait);
    digitalWrite(buzzPin,LOW);
  }   

}
