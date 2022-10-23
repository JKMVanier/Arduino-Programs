//Goal: Illuminating all the colors of an rgb in sequence. 
//Theme: digitalWrite
void setup() {
 
pinMode(13, OUTPUT);//assigns pin as an output
  pinMode(12, OUTPUT);//assigns pin as an output
  pinMode(11, OUTPUT);//assigns pin as an output
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);//turns the rgb red by enabling the output
delay(1000);//waits 1 second
digitalWrite(13,LOW); //turns the rgb off by disabling the output
delay(1000);//waits 1 second
 
digitalWrite(12,HIGH); //turns the rgb green by enabling the output
delay(1000);//waits 1 second
digitalWrite(12,LOW); //turns the rgb off by disabling the output
delay(1000);//waits 1 second

digitalWrite(11,HIGH); //turns the blue by enabling the output
delay(1000);//waits 1 second
digitalWrite(11,LOW); //turns the rgb off by disabling the output
delay(1000);//waits 1 second

digitalWrite(13,HIGH);//turns the rgb white enabling the all 3 outputs
digitalWrite(12,HIGH);//turns the rgb white enabling the all 3 outputs
digitalWrite(11,HIGH);//turns the rgb white enabling the all 3 outputs
delay(1000);//waits 1 second
digitalWrite(13,LOW); //turns the rgb off by disabling the output
digitalWrite(12,LOW); //turns the rgb off by disabling the output
digitalWrite(11,LOW); //turns the rgb off by disabling the output
delay(1000);//waits 1 second
}
