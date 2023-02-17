#include <Arduino.h>
const int R1 = 13;
const int G1 = 12;
const int R2 = 11;
const int G2 = 10;
const int G3 = 9;
const int R3 = 8;
const int G4 = 7;
const int R4 = 6;

void setup() {
  pinMode(R1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(G4, OUTPUT);
}

void loop() {
  int randomLED1 = random(6, 14);
  int randomLED2 = random(6, 14);

  digitalWrite(randomLED1, HIGH);
  digitalWrite(randomLED2, HIGH);
  delay(100);
  digitalWrite(randomLED1, LOW);
  digitalWrite(randomLED2, LOW);
  
}