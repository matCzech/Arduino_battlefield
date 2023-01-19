int myVoltage=A3;
int readVal;
float voltage;
int pause=1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myVoltage);
voltage=(5./1023.)*readVal;
Serial.println(voltage);
delay(pause);
}
