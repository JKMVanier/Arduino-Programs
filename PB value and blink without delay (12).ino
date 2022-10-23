//Goal: Blinking an LED and reading a push button state independant of eachother.
//Theme: millis()


int ledState = LOW;  // ledState used to set the LED

unsigned long previousMillis = 0;  // will store last time LED was updated

const long interval = 1000;  // interval at which to blink (milliseconds)

void setup() {
  
  pinMode(13, OUTPUT);// set the digital pin as output
  pinMode(2,INPUT);//assigns pin as an input
  Serial.begin(9600);//begins serial communication between board and pin
}

void loop() {
  
 int buttonState = digitalRead(2); //reads the state of the button input
 Serial.println(buttonState); //prints the state to the serial monitor


  unsigned long currentMillis = millis(); //interval the LED will blink at

  if (currentMillis - previousMillis >= interval) {
    // saves the last time the LED blinked
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(13, ledState);
  
}
  
}
