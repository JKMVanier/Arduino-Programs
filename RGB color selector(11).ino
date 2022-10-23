//Goal:Using RGB color codes to give the RGB LED a specific color. 
//Theme: Using analog write on digital pins.

void setup() {

  pinMode(13,OUTPUT)//assigns pin as an output
  pinMode(12,OUTPUT)//assigns pin as an output
  pinMode(11,OUTPUT)//assigns pin as an output

}

void loop() {
  
  analogWrite(13,233)// gives an analog output from digital pin
  analogWrite(12,32)// gives an analog output from digital pin
  analogWrite(11,32)// gives an analog output from digital pin

}
