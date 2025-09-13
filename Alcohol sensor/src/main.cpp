#include <Arduino.h>

// Pin definitions
const int sensorPin = A0;   // Alcohol sensor connected to analog pin A0
const int ledPin = 13;      // Onboard LED
const int buzzerPin = 8;    // Buzzer connected to digital pin 8

// Threshold (adjust based on calibration)
const int threshold = 400;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
}

void loop() {
    int sensorValue = analogRead(sensorPin);
    Serial.print("Alcohol Sensor Value: ");
    Serial.println(sensorValue);

    if (sensorValue > threshold) {
        digitalWrite(ledPin, HIGH);
        digitalWrite(buzzerPin, HIGH);
        Serial.println("⚠️ Alcohol detected!");
    } else {
        digitalWrite(ledPin, LOW);
        digitalWrite(buzzerPin, LOW);
    }

    delay(500); // Small delay for stability
}
