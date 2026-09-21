#include "notes.h"
#include "melanie.h"
#include "musical_figures.h"

//"Song of Storms" by Koji Kondo from "The Legend of Zelda: Ocarina of Time"

//buzzer conected to digital pin 3
Melanie mel(3);

void bass_section();
void leitmotif();
void extension();
void final1();
void final2();

void setup() {
  mel.begin();
}

void loop() {
  //bass_section();
  //bass_section();

  leitmotif();
  leitmotif();

  extension();

  final1();

  leitmotif();
  leitmotif();

  extension();

  final2();

  mel.wait(minima + seminima);

}

void bass_section() {
  mel.play(B3, seminima);
  mel.play(F4, seminima);
  mel.play(F4, seminima);

  mel.play(B3, seminima);
  mel.play(G4, minima);


  mel.play(B3, seminima);
  mel.play(A4, seminima);
  mel.play(A4, seminima);

  mel.play(B3, seminima);
  mel.play(G4, minima);
}

void leitmotif() {
  mel.play(D4, colcheia);
  mel.play(A4, colcheia);
  mel.play(D5, minima);
}

void extension() {
  mel.play(E5, seminima + seminima/2);
  mel.play(F5, colcheia);
  mel.play(E5, colcheia);
  mel.play(F5, colcheia);
  mel.play(E5, colcheia);
  mel.play(C5, colcheia);
  mel.play(A4, minima);
}

void final1() {
  mel.play(A4, seminima);
  mel.play(D4, seminima);
  mel.play(F4, colcheia);
  mel.play(G4, colcheia);
  mel.play(A4, minima + minima/2);

  mel.play(A4, seminima);
  mel.play(D4, seminima);
  mel.play(F4, colcheia);
  mel.play(G4, colcheia);
  mel.play(E4, minima + minima/2);
}

void final2() {
  mel.play(A4, seminima);
  mel.play(D4, seminima);
  mel.play(F4, colcheia);
  mel.play(G4, colcheia);
  mel.play(A4, minima);
  mel.play(A4, seminima);
  mel.play(D4, 2 * (minima + minima/2));
}






