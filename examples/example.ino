#include "notes.h"
#include "melanie.h"
#include "musical_figures.h"

//example 1

//buzzer conected to digital pin 3
Melanie mel(3);

void setup() {
  mel.begin();
}

void loop() {
  mel.play(C4, seminima);
  mel.play(D4, seminima);
  mel.play(E4, seminima);
  mel.play(F4, seminima);
  mel.play(G4, seminima);
  mel.play(A4, seminima);
  mel.play(B4, seminima);
  mel.play(C5, seminima);

  delay(minima); //or mel.wait(minima)
}

