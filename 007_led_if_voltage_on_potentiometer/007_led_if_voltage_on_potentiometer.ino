int readPin=A3;
int greenPin=7;
int yellowPin=8;
int redPin=9;
int readVal;
float voltage;
int pause=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(readPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  voltage=(5./1023.)*readVal;
  Serial.println(voltage);
    if(voltage>4.0){
      digitalWrite(redPin,HIGH);
      digitalWrite(yellowPin,LOW);      
    }else if(voltage>2.0){
      digitalWrite(yellowPin,HIGH);
      digitalWrite(greenPin,LOW); 
      digitalWrite(redPin,LOW);     
    }else{           
      digitalWrite(greenPin,HIGH); 
      digitalWrite(yellowPin,LOW);
      digitalWrite(redPin,LOW);    
    }
  delay(pause);
}
