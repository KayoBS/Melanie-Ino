#ifndef MELANIE_H_INCLUDED
#define MELANIE_H_INCLUDED

class Melanie {
  private:
    byte pin;
  
  public:
    Melanie(byte pin);
    void begin();
    void play(unsigned int note, unsigned int time);
    void wait(unsigned int time);
};

#endif