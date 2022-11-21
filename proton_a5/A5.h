#ifndef _VARIANT_A5_
#define _VARIANT_A5_

#include "Arduino.h"

class Proton_Arduino_PLC
{
public:
  Proton_Arduino_PLC();
  int _AO1 = 0;
  int _AO2 = 0;

  int d1(void);
  int d2(void);
  int d3(void);
  int d4(void);
  int d5(void);
  int d6(void);

  int a1(void);
  int a2(void);
  int a3(void);
  int a4(void);

  void rel1(int ON_OFF);
  void rel2(int ON_OFF);
  void rel3(int ON_OFF);
  void rel4(int ON_OFF);
  void rel5(int ON_OFF);

  int read(int D1_D6_A1_A4_AO1_AO2);
  void write(int AO1_AO2, int Value);

  void on(int REL1_REL5);
  void off(int REL1_REL5);

private:
};

#endif