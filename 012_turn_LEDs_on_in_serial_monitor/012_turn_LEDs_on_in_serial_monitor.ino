int greenPin=9;
int bluePin=10;
int whitePin=11;
String myColor;
String errorMsg="There is no such color";
String msg="What color LED to turn on?";

void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(whitePin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){
    
  }

  myColor=Serial.readString();

  if(myColor == "green"){
    digitalWrite(greenPin,HIGH); 
    digitalWrite(bluePin,LOW);
    digitalWrite(whitePin,LOW);    
  }else if(myColor == "blue"){
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(whitePin,LOW); 
  }else if(myColor == "white"){
    digitalWrite(whitePin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);     
  }else{
    digitalWrite(greenPin,LOW); 
    digitalWrite(bluePin,LOW);
    digitalWrite(whitePin,LOW); 
    Serial.println(errorMsg); 
  }
  
  
}
