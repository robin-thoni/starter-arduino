#include <Arduino.h>

#define ledPin 13

void setup() {
    pinMode (ledPin, OUTPUT);

    digitalWrite (ledPin, LOW);
}

void delayMs(unsigned int ms)
{
    for (unsigned i = 0; i < ms; i++) {
        delayMicroseconds(1000);
    }
}

void loop() {

    digitalWrite(ledPin, !digitalRead(ledPin));
    delayMs(1000);
}