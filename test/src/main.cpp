#include <Arduino.h>

const int ledPin = 13;  // Built-in LED on Arduino Uno

void setup() {
    pinMode(ledPin, OUTPUT);  // configure LED pin as output
}

void loop() {
    digitalWrite(ledPin, HIGH);  // turn LED on
    delay(500);                  // wait 500 ms
    digitalWrite(ledPin, LOW);   // turn LED off
    delay(500);                  // wait 500 ms
}
