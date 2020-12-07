void setup() {
  
pinMode(LED_BUILTIN, OUTPUT);
pinMode(7,INPUT);
Serial.begin (9600);
}

void loop() {
  if (digitalRead(7)){
 digitalWrite (LED_BUILTIN, HIGH);
 Serial.write("1");
  }
else{
  digitalWrite (LED_BUILTIN, LOW);
  }
}
