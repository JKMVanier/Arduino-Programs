//Goal: Using pushbutton to control rgb colors. 
//Theme: digital input controlling digital output

void setup() {

  Serial.begin(9600);
  pinMode(2, INPUT); //sets pin 2 as an input and enables internal pullup resistor
  pinMode(13,OUTPUT); //sets pin as an output
   pinMode(12,OUTPUT);//sets pin as an output
   pinMode(11,OUTPUT);//sets pin as an output
}
void loop() {
  
  int buttonState = digitalRead(2); //reads state of push value into a variable
  Serial.println(buttonState);

if (buttonState == HIGH) {//sets conditions
digitalWrite(13,HIGH);//pin's output is enabled if conditions are met
digitalWrite(12,HIGH);//pin's output is enabled if conditions are met
 digitalWrite(11,LOW);//pin's output is disabled if conditions are met
}
else {
  digitalWrite(13,HIGH); //pin's output is enabled if conditions are not met
   digitalWrite(12,LOW); //pin's output is disabled if conditions are not met
  digitalWrite(11,HIGH); //pin's output is enabled if conditions are not met
}


}

}