#include "abecedario.h"

extern int letra;

void letra_A (){
  
  //Serial.println("A");

  down_coils ();
  delay(tiempo);
  off_coils();
 

  up_bob1 ();
  delay(tiempo);
  off_coils();
     
}

void letra_B (){

  //Serial.println("B");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob3 ();
  delay(tiempo);  
  off_coils();
    
}

void letra_C (){

  //Serial.println("C");
  
  down_coils ();  
  delay(tiempo);
  off_coils();
  

  up_bob1 ();
  up_bob2 ();
  delay(tiempo);  
  off_coils();
   
}

void letra_D (){

  //Serial.println("D");

  down_coils ();
  delay(tiempo);
  off_coils();
 

  up_bob1 ();
  up_bob2 ();
  up_bob4 ();
  delay(tiempo);
  off_coils();
     
}

void letra_E (){

  //Serial.println("E");

  down_coils ();
  delay(tiempo);
  off_coils();
 
  up_bob1 ();
  up_bob4 ();
  delay(tiempo);
  off_coils();
 
    
}

void letra_F (){

  //Serial.println("F");

  down_coils ();
  delay(tiempo);
  off_coils();
 

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  delay(tiempo);  
  off_coils();
     
}

void letra_G (){

  //Serial.println("G");
  
  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  delay(tiempo);  
  off_coils();
}

void letra_H (){

  //Serial.println("H");
  
  down_coils ();
  delay(tiempo);
  off_coils();
 

  up_bob1 ();
  up_bob3 ();
  up_bob4 ();
  delay(tiempo);
  off_coils();

}

void letra_I (){

  //Serial.println("I");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob2 ();
  up_bob3 ();
  delay(tiempo); 
  off_coils();

}
void letra_J (){

  //Serial.println("J");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  delay(tiempo);  
  off_coils();
   
}

void letra_K (){

  //Serial.println("K");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob5 ();
  delay(tiempo);  
  off_coils();
    
}

void letra_L (){

  //Serial.println("L");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob3 ();
  up_bob5 ();
  delay(tiempo); 
  off_coils();
       
}

void letra_M (){

  //Serial.println("M");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob2 ();
  up_bob5 ();
  delay(tiempo);  
  off_coils();
 
    
}

void letra_N (){

  //Serial.println("N");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob2 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);  
  off_coils();
  
}

void letra_O (){

  //Serial.println("O");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);  
  off_coils();
 
    
}

void letra_P (){

  //Serial.println("P");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  up_bob5 ();
  delay(tiempo);  
  off_coils();
 
}

void letra_Q (){

  //Serial.println("Q");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);  
  off_coils();
  
}

void letra_R (){

  //Serial.println("R");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob3 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);  
  off_coils();
  
}
void letra_S (){

  //Serial.println("S");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob2 ();
  up_bob3 ();
  up_bob5 ();  
  delay(tiempo);
  off_coils();
  
}
void letra_T (){

  //Serial.println("T");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);
  off_coils();
  
}
void letra_U (){

  //Serial.println("U");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob5 ();
  up_bob6 ();
  delay(tiempo);  
  off_coils();
  
}

void letra_V (){

  //Serial.println("V");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob3 ();
  up_bob5 ();
  up_bob6 ();
  delay(tiempo);
  off_coils();

}

void letra_W (){

  //Serial.println("W");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  up_bob6 ();
  delay(tiempo);  
  off_coils();

}

void letra_X (){

  //Serial.println("X");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob2 ();
  up_bob5 ();
  up_bob6 ();
  delay(tiempo);  
  off_coils();
 
}

void letra_Y (){

  //Serial.println("Y");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob2 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);
  off_coils();
 
}

void letra_Z (){

  //Serial.println("Z");

  down_coils ();
  delay(tiempo);
  off_coils();

  up_bob1 ();
  up_bob4 ();
  up_bob5 ();
  up_bob6 ();
  delay(tiempo);  
  off_coils();
 
}

//***************************************SUBIR BOBINAS******************************************************
void up_bob1(){
  //Serial.println("upbob1");
  digitalWrite(coil1_A,LOW);
  digitalWrite(coil1_B,HIGH);
    
}

void up_bob2(){
  //Serial.println("upbob2");
  digitalWrite(coil2_A,LOW);
  digitalWrite(coil2_B,HIGH);
  
  
}

void up_bob3(){
  //Serial.println("upbob3");
  digitalWrite(coil3_A,LOW);
  digitalWrite(coil3_B,HIGH);
  
  
}

void up_bob4(){
  //Serial.println("upbob4");
  digitalWrite(coil4_A,LOW);
  digitalWrite(coil4_B,HIGH);
  
}

void up_bob5(){
  //Serial.println("upbob5");
  digitalWrite(coil5_A,LOW);
  digitalWrite(coil5_B,HIGH);

}

void up_bob6(){
  //Serial.println("upbob6");
  digitalWrite(coil6_A,LOW);
  digitalWrite(coil6_B,HIGH);
   
}

//***************************************BAJAR BOBINA**********************************************
void down_bob1 (){
  //Serial.println("downbob1");
  digitalWrite(coil1_A,HIGH);
  digitalWrite(coil1_B,LOW);

}

void down_bob2 (){
  //Serial.println("downbob2");
  digitalWrite(coil2_A,HIGH);
  digitalWrite(coil2_B,LOW);
  
}

void down_bob3 (){
  //Serial.println("downbob3");
  digitalWrite(coil3_A,HIGH);
  digitalWrite(coil3_B,LOW);
 
}

void down_bob4 (){
  //Serial.println("downbob4");
  digitalWrite(coil4_A,HIGH);
  digitalWrite(coil4_B,LOW);
  
  
}

void down_bob5 (){
  //Serial.println("downbob5");
  digitalWrite(coil5_A,HIGH);
  digitalWrite(coil5_B,LOW);
 

}

void down_bob6 (){
  //Serial.println("downbob6");
  digitalWrite(coil6_A,HIGH);
  digitalWrite(coil6_B,LOW);
  
  
}

//******************************APAGAR BOBINAS**************************************
void off_coils(){
  //Serial.println("off_coils");
  digitalWrite(coil1_A,LOW);
  digitalWrite(coil1_B,LOW);

  digitalWrite(coil2_A,LOW);
  digitalWrite(coil2_B,LOW);

  digitalWrite(coil3_A,LOW);
  digitalWrite(coil3_B,LOW);

  digitalWrite(coil4_A,LOW);
  digitalWrite(coil4_B,LOW);

  digitalWrite(coil5_A,LOW);
  digitalWrite(coil5_B,LOW);

  digitalWrite(coil6_A,LOW);
  digitalWrite(coil6_B,LOW);
}

////////////////////////////////////BAJAR TODAS LAS BOBINAS//////////////////////////////////

void down_coils (){
  //Serial.println("down_coils");

  digitalWrite(coil1_A,HIGH);
  digitalWrite(coil1_B,LOW);

  digitalWrite(coil2_A,HIGH);
  digitalWrite(coil2_B,LOW);

  digitalWrite(coil3_A,HIGH);
  digitalWrite(coil3_B,LOW);

  digitalWrite(coil4_A,HIGH);
  digitalWrite(coil4_B,LOW);

  digitalWrite(coil5_A,HIGH);
  digitalWrite(coil5_B,LOW);

  digitalWrite(coil6_A,HIGH);
  digitalWrite(coil6_B,LOW);
}

void letraBraille()
{
  switch (letra)
  {
  case 1:
    letra_A();
    break;

  default:
    break;
  }
}
