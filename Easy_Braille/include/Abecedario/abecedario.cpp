#include "Arduino.h"
#include "abecedario.h"



//#define tiempo 40

abecedario::abecedario()
{
  pinMode(Pin_coil1_A, OUTPUT);
  pinMode(Pin_coil1_B, OUTPUT);
  pinMode(Pin_coil2_A, OUTPUT);
  pinMode(Pin_coil2_B, OUTPUT);
  pinMode(Pin_coil3_A, OUTPUT);
  pinMode(Pin_coil3_B, OUTPUT);
  pinMode(Pin_coil4_A, OUTPUT);
  pinMode(Pin_coil4_B, OUTPUT);
  pinMode(Pin_coil5_A, OUTPUT);
  pinMode(Pin_coil5_B, OUTPUT);
  pinMode(Pin_coil6_A, OUTPUT);
  pinMode(Pin_coil6_B, OUTPUT);

  _coil1_A = Pin_coil1_A;
  _coil1_B = Pin_coil1_B;
  _coil2_A = Pin_coil2_A;
  _coil2_B = Pin_coil2_B;
  _coil3_A = Pin_coil3_A;
  _coil3_B = Pin_coil3_B;
  _coil4_A = Pin_coil4_A;
  _coil4_B = Pin_coil4_B;
  _coil5_A = Pin_coil5_A;
  _coil5_B = Pin_coil5_B;
  _coil6_A = Pin_coil6_A;
  _coil6_B = Pin_coil6_B;
  
}

//int letra;
int _tiempo = 50;



//***************************************SUBIR BOBINAS******************************************************
void abecedario::up_bob1()
{
  Serial.println("upbob1");
  digitalWrite(_coil1_A, LOW);
  digitalWrite(_coil1_B, HIGH);
}

void abecedario::up_bob2()
{
  Serial.println("upbob2");
  digitalWrite(_coil2_A, LOW);
  digitalWrite(_coil2_B, HIGH);
}

void abecedario::up_bob3()
{
  Serial.println("upbob3");
  digitalWrite(_coil3_A, LOW);
  digitalWrite(_coil3_B, HIGH);
}

void abecedario::up_bob4()
{
  Serial.println("upbob4");
  digitalWrite(_coil4_A, LOW);
  digitalWrite(_coil4_B, HIGH);
}

void abecedario::up_bob5()
{
  Serial.println("upbob5");
  digitalWrite(_coil5_A, LOW);
  digitalWrite(_coil5_B, HIGH);
}

void abecedario::up_bob6()
{
  Serial.println("upbob6");
  digitalWrite(_coil6_A, LOW);
  digitalWrite(_coil6_B, HIGH);
}

//***************************************BAJAR BOBINA**********************************************
void abecedario::down_bob1()
{
  Serial.println("downbob1");
  digitalWrite(_coil1_A, HIGH);
  digitalWrite(_coil1_B, LOW);
}

void abecedario::down_bob2()
{
  Serial.println("downbob2");
  digitalWrite(_coil2_A, HIGH);
  digitalWrite(_coil2_B, LOW);
}

void abecedario::down_bob3()
{
  Serial.println("downbob3");
  digitalWrite(_coil3_A, HIGH);
  digitalWrite(_coil3_B, LOW);
}

void abecedario::down_bob4()
{
  Serial.println("downbob4");
  digitalWrite(_coil4_A, HIGH);
  digitalWrite(_coil4_B, LOW);
}

void abecedario::down_bob5()
{
  Serial.println("downbob5");
  digitalWrite(_coil5_A, HIGH);
  digitalWrite(_coil5_B, LOW);
}

void abecedario::down_bob6()
{
  Serial.println("downbob6");
  digitalWrite(_coil6_A, HIGH);
  digitalWrite(_coil6_B, LOW);
}

//******************************APAGAR BOBINAS**************************************
void abecedario::off_coils()
{
  Serial.println("off_coils");
  digitalWrite(_coil1_A, LOW);
  digitalWrite(_coil1_B, LOW);

  digitalWrite(_coil2_A, LOW);
  digitalWrite(_coil2_B, LOW);

  digitalWrite(_coil3_A, LOW);
  digitalWrite(_coil3_B, LOW);

  digitalWrite(_coil4_A, LOW);
  digitalWrite(_coil4_B, LOW);

  digitalWrite(_coil5_A, LOW);
  digitalWrite(_coil5_B, LOW);

  digitalWrite(_coil6_A, LOW);
  digitalWrite(_coil6_B, LOW);
}

////////////////////////////////////BAJAR TODAS LAS BOBINAS//////////////////////////////////

void abecedario::down_coils()
{
  Serial.println("down_coils");

  digitalWrite(_coil1_A, HIGH);
  digitalWrite(_coil1_B, LOW);

  digitalWrite(_coil2_A, HIGH);
  digitalWrite(_coil2_B, LOW);

  digitalWrite(_coil3_A, HIGH);
  digitalWrite(_coil3_B, LOW);

  digitalWrite(_coil4_A, HIGH);
  digitalWrite(_coil4_B, LOW);

  digitalWrite(_coil5_A, HIGH);
  digitalWrite(_coil5_B, LOW);

  digitalWrite(_coil6_A, HIGH);
  digitalWrite(_coil6_B, LOW);
}

void abecedario::letra_A()
{

  Serial.println("A");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_B()
{

  Serial.println("B");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob3();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_C()
{

  Serial.println("C");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_D()
{

  Serial.println("D");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob4();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_E()
{

  Serial.println("E");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob4();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_F()
{

  Serial.println("F");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob3();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_G()
{

  Serial.println("G");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob3();
  up_bob4();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_H()
{

  Serial.println("H");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob3();
  up_bob4();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_I()
{

  Serial.println("I");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob2();
  up_bob3();
  delay(_tiempo);
  off_coils();
}
void abecedario::letra_J()
{

  Serial.println("J");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob2();
  up_bob3();
  up_bob4();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_K()
{

  Serial.println("K");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_L()
{

  Serial.println("L");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob3();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_M()
{

  Serial.println("M");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_N()
{

  Serial.println("N");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob4();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_O()
{

  Serial.println("O");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob4();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_P()
{

  Serial.println("P");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob3();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_Q()
{

  Serial.println("Q");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob3();
  up_bob4();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_R()
{

  Serial.println("R");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob3();
  up_bob4();
  up_bob5();
  delay(_tiempo);
  off_coils();
}
void abecedario::letra_S()
{

  Serial.println("S");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob2();
  up_bob3();
  up_bob5();
  delay(_tiempo);
  off_coils();
}
void abecedario::letra_T()
{

  Serial.println("T");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob2();
  up_bob3();
  up_bob4();
  up_bob5();
  delay(_tiempo);
  off_coils();
}
void abecedario::letra_U()
{

  Serial.println("U");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob5();
  up_bob6();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_V()
{

  Serial.println("V");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob3();
  up_bob5();
  up_bob6();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_W()
{

  Serial.println("W");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob2();
  up_bob3();
  up_bob4();
  up_bob6();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_X()
{

  Serial.println("X");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob5();
  up_bob6();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_Y()
{

  Serial.println("Y");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob2();
  up_bob4();
  up_bob5();
  delay(_tiempo);
  off_coils();
}

void abecedario::letra_Z()
{

  Serial.println("Z");

  down_coils();
  delay(_tiempo);
  off_coils();

  up_bob1();
  up_bob4();
  up_bob5();
  up_bob6();
  delay(_tiempo);
  off_coils();
}

void abecedario::letraBraille(int letra)
{
  switch (letra)
  {
  case 1:
    letra_A();
    break;
  case 2:
    letra_B();
    break;
  case 3:
    letra_C();
    break;
  case 4:
    letra_D();
    break;
  case 5:
    letra_E();
    break;
  case 6:
    letra_F();
    break;
  case 7:
    letra_G();
    break;
  case 8:
    letra_H();
    break;
  case 9:
    letra_I();
    break;
  case 10:
    letra_J();
    break;
  case 11:
    letra_K();
    break;
  case 12:
    letra_L();
    break;
  case 13:
    letra_M();
    break;
  case 14:
    letra_N();
    break;
  case 15:
    letra_O();
    break;
  case 16:
    letra_P();
    break;
  case 17:
    letra_Q();
    break;
  case 18:
    letra_R();
    break;
  case 19:
    letra_S();
    break;
  case 20:
    letra_T();
    break;
  case 21:
    letra_U();
    break;
  case 22:
    letra_V();
    break;
  case 23:
    letra_W();
    break;
  case 24:
    letra_X();
    break;
  case 25:
    letra_Y();
    break;
  case 26:
    letra_Z();
    break;

  default:
    break;
  }
}
