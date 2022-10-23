//Goal: Using digital pin to read input and display input value on a serial monitor. 
//Theme: digitalRead

void setup() {

pinMode(2,INPUT);//assigns pin as an input

Serial.begin(9600);
}

void loop() {

int buttonState = digitalRead(2); //reads the state of the button input

 Serial.println(buttonState); //prints the state to the serial monitor

}