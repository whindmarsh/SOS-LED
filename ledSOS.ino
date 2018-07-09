int ledPin = 13; 


void setup() {

 pinMode(ledPin, OUTPUT); 

}

void loop() {
  
  ledOn(400, 200);
  ledOn(1200, 600); 
  ledOn(400, 200);
  delay(2000); 
}

void ledOn(int x, int y) {

  for(int i =0 ; i < 3; i++) {
  
    digitalWrite(ledPin, HIGH);
    delay(x); 
    digitalWrite(ledPin, LOW);
    delay(y);
  }
}
