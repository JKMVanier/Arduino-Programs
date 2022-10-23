//Goal: Using digital pins to read states. 
//Theme: INPUT_PULLUP.

void setup() {

  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP); //sets pin 2 as an input and enables internal pullup resistor
  
}
void loop() {
  
  int buttonState = digitalRead(2); //reads state of push button value into a variable
  
  Serial.println(buttonState);// prints state of button to serial monitor

}