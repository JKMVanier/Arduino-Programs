//Goal: Demonstrating analog value through leds.
//Theme: if & else statements using analogRead to control digital output.
void setup() {
  
  Serial.begin(9600); // initialize serial communication at 9600 bits per second:
  pinMode(13, OUTPUT); //assigns pin as an output
  pinMode(12, OUTPUT); //assigns pin as an output 
  pinMode(11, OUTPUT); //assigns pin as an output
  pinMode(10, OUTPUT); //assigns pin as an output
  pinMode(9, OUTPUT); //assigns pin as an output

}


void loop() {
 
  int sensorValue = analogRead(A0); //reads input from analog pin
 
  delay(1000);  

  float voltage= sensorValue * (5.0 / 1023.0); //converts analog reading from 0-1023 to 0-5 to now demonstrate voltage and assignes new value as voltage
  Serial.println(voltage); //prints voltage reading to serial monitor

 if((voltage>0) && (voltage<1)){ //sets conditions for if statement
digitalWrite(13, HIGH); //assigns pin as output if conditions are met
  }
else { 
 digitalWrite(13, LOW); //disables pin output if conditions are not met
}

if((voltage>1) && (voltage<2)){ //sets conditions for if statement
digitalWrite(12, HIGH); //assigns pin as output if conditions are met
  }
 else {
 digitalWrite(12, LOW); //disables pin output if conditions are not met
} 
if((voltage>2) && (voltage<3)){
digitalWrite(11, HIGH); //assigns pin as output if conditions are met
  }
  else {
 digitalWrite(11, LOW); //disables pin output if conditions are not met
}
  if((voltage>3) && (voltage<4)){
digitalWrite(10, HIGH); //assigns pin as output if conditions are met
  }
  else {
 digitalWrite(10, LOW); //disables pin output if conditions are not met
}
  if((voltage>4) && (voltage<5)){
digitalWrite(9, HIGH); //assigns pin as output if conditions are met
  }
  else {
 digitalWrite(9, LOW); //disables pin output if conditions are not met
}

}
 
