//Goal: Turning LEDS on in sequence then returning. 
//Theme: digitalWrite HIGH then LOW

void setup() {
  
  pinMode(13, OUTPUT);//assigns pin as an output
  pinMode(12, OUTPUT);//assigns pin as an output
  pinMode(11, OUTPUT);//assigns pin as an output
  pinMode(10, OUTPUT);//assigns pin as an output
  pinMode(9, OUTPUT);//assigns pin as an output
}

void loop() {
digitalWrite(13,HIGH);//turns the led on
delay(1000);//waits 1 second
digitalWrite(13,LOW); //turns the led off
delay(1000);//waits 1 second
 
digitalWrite(12,HIGH); //turns the led on
delay(1000);//waits 1 second
digitalWrite(12,LOW); //turns the led off
delay(1000);//waits 1 second

digitalWrite(11,HIGH); //turns the led on
delay(1000);//waits 1 second
digitalWrite(11,LOW); //turns the led off
delay(1000);//waits 1 second

digitalWrite(10,HIGH); //turns the led on
delay(1000);//waits 1 second
digitalWrite(10,LOW); //turns the led off
delay(1000);//waits 1 second

digitalWrite(9,HIGH); //turns the led on
delay(1000);//waits 1 second
digitalWrite(9,LOW); //turns the led off
delay(1000);//waits 1 second

digitalWrite(10,HIGH); //turns the led on
delay(1000);//waits 1 second
digitalWrite(10,LOW); //turns the led off
delay(1000);//waits 1 second

digitalWrite(11,HIGH); //turns the led on
delay(1000);//waits 1 second
digitalWrite(11,LOW); //turns the led off
delay(1000);//waits 1 second

digitalWrite(12,HIGH); //turns the led on
delay(1000);//waits 1 second
digitalWrite(12,LOW); //turns the led off
delay(1000);//waits 1 second

}
