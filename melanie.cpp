#include "Arduino.h"
#include "melanie.h"

Melanie::Melanie(byte pin) {
  this->pin = pin;
}

void Melanie::begin() {
  pinMode(this->pin, OUTPUT);
}

void Melanie::play(unsigned int note, unsigned int time) {
  tone(this->pin, note, time -50);
  delay(time);
}

void Melanie::wait(unsigned int time) {
  delay(time);
}