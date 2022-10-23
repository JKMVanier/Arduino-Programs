//Goal: Using pushbutton to control rgb colors. 
//Theme: digital input controlling digital output

void setup() {

  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP); //sets pin 2 as an input and enables internal pullup resistor
  pinMode(13,OUTPUT);//sets pin as an output
   pinMode(12,OUTPUT);//sets pin as an output
    pinMode(11,OUTPUT);//sets pin as an output
}
void loop() {
  
  int buttonState = digitalRead(2); //reads state of push value into a variable
  
  Serial.println(buttonState);// prints state of button to serial monitor

if (buttonState == HIGH) { //sets conditions
digitalWrite(13,HIGH);//enables pin's output if conditions are met
digitalWrite(12,HIGH);//enables pin's output if conditions are met
digitalWrite(11,LOW);//enables pin's output if conditions are met
}
else {
  digitalWrite(13,HIGH);//disables pin's output if conditions are not met
  digitalWrite(12,LOW);//disables pin's output if conditions are not met
  digitalWrite(11,HIGH);//disables pin's output if conditions are not met
}

}