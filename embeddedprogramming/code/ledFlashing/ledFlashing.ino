int numPush=1;
void setup() {  
pinMode(LED_BUILTIN, OUTPUT);
pinMode(6,INPUT);
Serial.begin (9600); 
}
void loop() {
  int x=1;
  if (digitalRead(6)){    
    while(x<=4) {
     digitalWrite (LED_BUILTIN, HIGH);
       delay(1000/numPush);
         Serial.println("OFF");
       digitalWrite (LED_BUILTIN, LOW);
         delay(1000/numPush);
         Serial.println("ON");
         x++;
       }
    numPush++;
    } 
else{
  digitalWrite (LED_BUILTIN, LOW);
  }
}
