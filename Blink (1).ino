
// Goal: Using pins as outputs.
// Theme: digitalWrite and delay.


void setup() {
 
  pinMode(LED_BUILTIN, OUTPUT);// Sets pin 13 as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(1000);                       // wait for a second
}
