/*
 * PINOUT
 * 
 * PUL+ --> +5v
 * DIR+ --> +5v
 * ENA+ --> +5v
 * PUL- --> 3
 * DIR- --> 2
 * 
 * 
 * motor to driver
 * A+  --> black
 * A-  --> green
 * B+  --> red
 * B-  --> Blue
 * 
 * if some colors are missing
 * 
 */


#define dirpin 2
#define pulpin 3

#define stepsperrev  100
#define delay1  2000

void setup() {
  // put your setup code here, to run once:
pinMode(dirpin,OUTPUT);
pinMode(pulpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(dirpin,LOW); //clockwise

for(int i=0;i<stepsperrev;i++)
{
  digitalWrite(pulpin,HIGH);
  delayMicroseconds(delay1);
  digitalWrite(pulpin,LOW);
  delayMicroseconds(delay1);
}
delay(1000);

digitalWrite(dirpin,HIGH);  //anticlockwise
for(int i=0;i<stepsperrev;i++)
{
  digitalWrite(pulpin,HIGH);
  delayMicroseconds(delay1);
  digitalWrite(pulpin,LOW);
  delayMicroseconds(delay1);
}
delay(1000);
//for(int i=200;i
}
