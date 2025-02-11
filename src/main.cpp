#include <Arduino.h>
#include <util/delay.h>

// put function declarations here:
const int ledPin = 11;
int brightnessInPercent = 0;
int brightness = 0;
bool down = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  while (brightnessInPercent <= 100)
  {
    brightness = (256/100)*brightnessInPercent;
    analogWrite(ledPin, brightness);
    brightnessInPercent = brightnessInPercent + 5;
    delay(200);
  }
  digitalWrite(ledPin, LOW);

}

