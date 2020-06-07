#include <Arduino.h>

#define tiempo 40

void cellA (){
  
  Serial.println("A");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();
  
    
}
void cellB (){

  Serial.println("B");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob3 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();
   
}

void cellC (){

  Serial.println("C");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();   
}
void cellD (){

  Serial.println("D");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob4 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
    
}
void cellE (){
  Serial.println("E");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob4 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
    
}
void cellF (){

  Serial.println("F");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
    
}
void cellG (){

  Serial.println("G");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();   
}
void cellH (){
   Serial.println("H");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob3 ();
  up_bob4 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellI (){
     Serial.println("I");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob2 ();
  up_bob3 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellJ (){
     Serial.println("J");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellK (){
    Serial.println("K");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob5 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();   
}
void cellL (){
     Serial.println("L");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob3 ();
  up_bob5 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
    
}
void cellM (){
     Serial.println("M");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob5 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
    
}
void cellN (){
     Serial.println("N");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellO (){
     Serial.println("O");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
    
}
void cellP (){
     Serial.println("P");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  up_bob5 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellQ (){
     Serial.println("Q");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  up_bob5 ();
  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellR (){
    Serial.println("R");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob3 ();
  up_bob4 ();
  up_bob5 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellS (){
    Serial.println("S");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob2 ();
  up_bob3 ();
  up_bob5 ();
  

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellT (){
    Serial.println("T");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  up_bob5 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}
void cellU (){
    Serial.println("U");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob5 ();
  up_bob6 ();
  

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}

void cellV (){
    Serial.println("V");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob3 ();
  up_bob5 ();
  up_bob6 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}

void cellW (){
    Serial.println("W");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob2 ();
  up_bob3 ();
  up_bob4 ();
  up_bob6 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}

void cellX (){
    Serial.println("X");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob5 ();
  up_bob6 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}

void cellY (){
    Serial.println("Y");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob2 ();
  up_bob4 ();
  up_bob5 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}

void cellZ (){
    Serial.println("Z");
  down_bob1 ();
  down_bob2 ();
  down_bob3 ();
  down_bob4 ();
  down_bob5 ();
  down_bob6 ();
  delay(tiempo);

  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();

  up_bob1 ();
  up_bob4 ();
  up_bob5 ();
  up_bob6 ();

  delay(tiempo);
  
  off_bob1();
  off_bob2();
  off_bob3();
  off_bob4();
  off_bob5();
  off_bob6();  
}