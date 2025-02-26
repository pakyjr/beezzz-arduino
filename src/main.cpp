#include <Arduino.h>

#define LED_PIN 2 // Change if using a different GPIO

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH); // Turn LED on
    delay(1000);                 // Wait 1 sec
    digitalWrite(LED_PIN, LOW);  // Turn LED off
    delay(1000);                 // Wait 1 sec
}