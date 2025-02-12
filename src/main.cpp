#include <Arduino.h>
#include <util/delay.h>

// put function declarations here:
const int ledPin0 = 11;
const int ledPin1 = 10;
const int ledPin2 = 9;
const int ledPin3 = 8;
const int levPin0 = 2;
const int levPin1 = 3;

/*Gehört zu schneller und einfacher*/
void onoff(int pinnum) {
  digitalWrite(pinnum, HIGH);
  delay(100);
  digitalWrite(pinnum, LOW);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin0, OUTPUT);  
  pinMode(ledPin1, OUTPUT);  
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin3, OUTPUT);  
  pinMode(levPin0, INPUT);  
  pinMode(levPin1, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  /* Primitiv*/
  /*
  digitalWrite(ledPin0, HIGH);
  delay(200);
  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin1, HIGH);
  delay(200);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(200);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(200);
  digitalWrite(ledPin3, LOW);
  */

  /*Schneller und einfacher*/

  /*
  onoff(ledPin0);
  onoff(ledPin1);
  onoff(ledPin2);
  onoff(ledPin3);
  onoff(ledPin2);
  onoff(ledPin1);
  */

  /*mit dyn, aber halt ohne var, weil keine var während laufzeit, sonst auau*/

  for (int i = 8; i < 12; i++)
  {
    onoff(i);
  }
  for (int i = 11; i > 7; i--)
  {
    onoff(i);
  }
  


}

