#include <Arduino.h>
void setup() {
  // initialize digital pin PA7 as an output.
  pinMode(PA7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PA7, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(PA7, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
}