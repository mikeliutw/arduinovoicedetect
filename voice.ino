/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int p=2;
int val=0;
int oldval=0;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
   pinMode(p, INPUT);
    Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  val =digitalRead(p);
  if(val){
    
  }else{ 
   if(oldval==0){
     oldval=1;
   }else{
     oldval=0;
   }
      Serial.println(oldval);
  }
  
  if(oldval){
      digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  }else{
      digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  }
}
