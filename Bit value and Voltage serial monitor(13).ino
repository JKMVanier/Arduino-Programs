//Goal: Displaying values on serial monitor. 
//Theme: using float to convert values.
void setup() {
  
  Serial.begin(9600); // initialize serial communications at 9600 bps:
}

void loop() {
  
  int sensorValue = analogRead(A0); // read the analog input from pin
 
 float voltage= sensorValue * (5.0 / 1023.0); //converts analog reading from 0-1023 to 0-5 to now demonstrate voltage and assignes new value as voltage


  Serial.print("bits:"); // indicates what value is being shown
  Serial.println(sensorValue); // prints analog value to serial monitor
 
Serial.print("\t"); // adds a tab for second set of values

 Serial.print("voltage:"); // indicates what value is being shown
  Serial.println(voltage); // prints analog value to serial monitor

  delay(1000); // delays value print outs for clarity


}
