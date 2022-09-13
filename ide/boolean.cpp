#include <Arduino.h>


int A,B,C,X,Y;


void setup(){
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(13,OUTPUT);
}
void loop(){
A = digitalRead(6);
B = digitalRead(7);
C = digitalRead(8);
X = (!A||!B&&C);
Y = (!A&&!B&&!C)||(!A&&B&&!C)||(!A&&B&&C)||(!A&&!B&&C)||(A&&!B&&C);


if (X==Y){
digitalWrite(13,HIGH);
}
else {
digitalWrite(13,LOW);
}
}
