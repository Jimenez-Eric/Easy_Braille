


#ifndef abecedario_h
#define abecedario_h
#include "Arduino.h"

class abecedario {

public:

    abecedario(int coil1_A,int coil1_B, int coil2_A,int coil2_B, int coil3_A, int coil3_B, int coil4_A, int coil4_B,
                int coil5_A, int coil5_B, int coil6_A, int coil6_B, int tiempo );

void down_coils ();
void off_coils();
void up_bob1 ();
void up_bob2 ();
void up_bob3 ();
void up_bob4 ();
void up_bob5 ();
void up_bob6 ();

void down_bob1 ();
void down_bob2 ();
void down_bob3 ();
void down_bob4 ();
void down_bob5 ();
void down_bob6 ();

void letra_A ();
void letra_B ();
void letra_C ();
void letra_D ();
void letra_E ();
void letra_F ();
void letra_G ();
void letra_H ();
void letra_I ();
void letra_J ();
void letra_K ();
void letra_L ();
void letra_M ();
void letra_N ();
void letra_O ();
void letra_P ();
void letra_Q ();
void letra_R ();
void letra_S ();
void letra_T ();
void letra_U ();
void letra_V ();
void letra_X ();
void letra_Y ();
void letra_Z ();



private: 
    int _coil1_A;
    int _coil1_B;
    int _coil2_A;
    int _coil2_B;
    int _coil3_A;
    int _coil3_B;
    int _coil4_A;
    int _coil4_B;
    int _coil5_A;
    int _coil5_B;
    int _coil6_A;
    int _coil6_B;
    int tiempo;


};

#endif 















