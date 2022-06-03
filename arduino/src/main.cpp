/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

#define LED_PIN 1
#define DELAY_TIME_MS 1000

void setup()
{
    Serial.begin(9600);
    // initialize LED digital pin as an output.
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    Serial.println("ON");
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_PIN, HIGH);
    // wait for a second
    delay(DELAY_TIME_MS);

    Serial.println("OFF");
    // turn the LED off by making the voltage LOW
    digitalWrite(LED_PIN, LOW);
    // wait for a second
    delay(DELAY_TIME_MS);
}
