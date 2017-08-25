//Last updated 25th August 2017 by Viktoria Hampe

int pinscharf = 5;
int pinfoto = 8;
int pinsensor = 10;

void setup() {
  
pinMode(pinscharf,OUTPUT);
Serial.begin(9600);
pinMode(pinfoto,OUTPUT);
Serial.begin(9600);
pinMode(pinsensor,INPUT);
Serial.begin(9600);

}

void loop() {
  
  if(digitalRead(pinsensor)){
    Serial.println("motion detected");
    digitalWrite(pinscharf, HIGH);
    Serial.println("focus");
    delay(2000); //time the camera focusses 
    digitalWrite(pinfoto,HIGH); //camera now releases shutter
    Serial.println("shoot"); 
    delay(100); 
    digitalWrite(pinscharf, LOW); 
    digitalWrite(pinfoto, LOW);
    Serial.println("turn off");
    delay(1000);  //time sensor
  }
  
  else{
    Serial.println("no motion detected");
  }
delay(100);
}
