//This is a code to make the arduino built in LED flashes 4
//with a regression in delay inversly propotioned to the number
//of pushes on a push button

// First we define an integer to count and store the number of pushes
int numPush=1;
void setup() {
// Then in the void setup we define the built in led as an output
// We define the digital pin connected to the pushbutton
// Monitoring the progress of the LED in the serial Monitor
pinMode(LED_BUILTIN, OUTPUT);
pinMode(6,INPUT);
Serial.begin (9600);
 
}

void loop() {
  //Defining the number of LED flashings and storing it in a
  //variable x
  int x=1;
  
  // The void loop reads the current state of the button connected
  // to the button (HIGH OR LOW)
  if (digitalRead(6)){
 
    // The if excution is a while loop that flashes the LED as long
    // as the number of flasings is <= 4
    while(x<=4) {
     digitalWrite (LED_BUILTIN, HIGH);
       delay(1000/numPush);
         Serial.println("OFF"); // printing the stated of the LED on the serial monitor
       digitalWrite (LED_BUILTIN, LOW);
         delay(1000/numPush);
         Serial.println("ON");
         x++; // increment of 1 to repeat flashing
       }
    numPush++; // increment of 1 depending on the number of pushings
    
    }
    
// as long as the button isn't pushed the LED stays off  
else{
  digitalWrite (LED_BUILTIN, LOW);
  }
}
