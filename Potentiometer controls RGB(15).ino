//Goal: Demonstrating analog value through an rgb.
//Theme: if & else statements demonstrating analogRead.
void setup() {
  
  Serial.begin(9600);
  pinMode(13, OUTPUT); //assigns pin as an output
  pinMode(12, OUTPUT); //assigns pin as an output 
  pinMode(11, OUTPUT); //assigns pin as an output
 

}


void loop() {
 
  int sensorValue = analogRead(A0); //reads input from analog pin
 
  float voltage = sensorValue * (5.0 / 1023.0); //converts analog reading from 0-1023 to 0-5 to now demonstrate voltage and assignes new value as voltage
 Serial.println(voltage);



if ((voltage >= 0.0) && (voltage <= 1.0)){ //sets conditions for if statement
analogWrite(13, 255); //assigns pin as output if conditions are met
analogWrite(12, 255);
analogWrite(11, 255);
  } else { 
 digitalWrite(13, LOW);
 digitalWrite(12, LOW); //disables pin output if conditions are not met
digitalWrite(10, LOW);
}

if ((voltage >= 1.0) && (voltage <= 2.0)){ //sets conditions for if statement
analogWrite(13, 255); //assigns pin as output if conditions are met
analogWrite(12, 0);
analogWrite(11, 0);
  } else { 
 digitalWrite(13, LOW);
 digitalWrite(12, LOW); //disables pin output if conditions are not met
digitalWrite(10, LOW);
}

if ((voltage >= 2.0) && (voltage <= 3.0)){ //sets conditions for if statement
analogWrite(13, 0); //assigns pin as output if conditions are met
analogWrite(12, 255);
analogWrite(11, 0);
  } else { 
 digitalWrite(13, LOW);
 digitalWrite(12, LOW); //disables pin output if conditions are not met
digitalWrite(10, LOW);
}

if ((voltage >= 3.0) && (voltage <= 4.0)){ //sets conditions for if statement
analogWrite(13, 0); //assigns pin as output if conditions are met
analogWrite(12, 0);
analogWrite(11, 255);
  } else { 
 digitalWrite(13, LOW);
 digitalWrite(12, LOW); //disables pin output if conditions are not met
digitalWrite(10, LOW);
}

if ((voltage >= 4.0) && (voltage <= 5.0)){ //sets conditions for if statement
analogWrite(13, 0); //assigns pin as output if conditions are met
analogWrite(12, 0);
analogWrite(11, 0);
  } else { 
 digitalWrite(13, LOW);
 digitalWrite(12, LOW); //disables pin output if conditions are not met
digitalWrite(10, LOW);
}



}