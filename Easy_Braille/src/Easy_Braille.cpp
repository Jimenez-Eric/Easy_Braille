#include <Arduino.h>

#define coil1_A 13
#define coil1_B 4

#define coil2_A 27
#define coil2_B 26

#define coil3_A 25
#define coil3_B 33

#define coil4_A 32
#define coil4_B 23
 
#define coil5_A 22
#define coil5_B 21

#define coil6_A 19
#define coil6_B 18



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(coil1_A, OUTPUT);
  pinMode(coil1_B, OUTPUT);

  pinMode(coil2_A, OUTPUT);
  pinMode(coil2_B, OUTPUT);

  pinMode(coil3_A, OUTPUT);
  pinMode(coil3_B, OUTPUT);

  pinMode(coil4_A, OUTPUT);
  pinMode(coil4_B, OUTPUT);

  pinMode(coil5_A, OUTPUT);
  pinMode(coil5_B, OUTPUT);

  pinMode(coil6_A, OUTPUT);
  pinMode(coil6_B, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:




}
//***************************************ENCENDER BOBINAS******************************************************
void up_bob1(){
  Serial.println("upbob1");
  digitalWrite(coil1_A,LOW);
  digitalWrite(coil1_B,HIGH);
    
}

void up_bob2(){
  Serial.println("upbob2");
  digitalWrite(coil2_A,LOW);
  digitalWrite(coil2_B,HIGH);
  
  
}

void up_bob3(){
  Serial.println("upbob3");
  digitalWrite(coil3_A,LOW);
  digitalWrite(coil3_B,HIGH);
  
  
}

void up_bob4(){
  Serial.println("upbob4");
  digitalWrite(coil4_A,LOW);
  digitalWrite(coil4_B,HIGH);
  
}

void up_bob5(){
  Serial.println("upbob5");
  digitalWrite(coil5_A,LOW);
  digitalWrite(coil5_B,HIGH);

}

void up_bob6(){
  Serial.println("upbob6");
  digitalWrite(coil6_A,LOW);
  digitalWrite(coil6_B,HIGH);
   
}

//***************************************APAGAR BOBINAS**********************************************
void down_bob1 (){
  Serial.println("downbob1");
  digitalWrite(coil1_A,HIGH);
  digitalWrite(coil1_B,LOW);

}

void down_bob2 (){
  Serial.println("downbob2");
  digitalWrite(coil2_A,HIGH);
  digitalWrite(coil2_B,LOW);
  
}

void down_bob3 (){
  Serial.println("downbob3");
  digitalWrite(coil3_A,HIGH);
  digitalWrite(coil3_B,LOW);
 
}

void down_bob4 (){
  Serial.println("downbob4");
  digitalWrite(coil4_A,HIGH);
  digitalWrite(coil4_B,LOW);
  
  
}

void down_bob5 (){
  Serial.println("downbob5");
  digitalWrite(coil5_A,HIGH);
  digitalWrite(coil5_B,LOW);
 

}

void down_bob6 (){
  Serial.println("downbob6");
  digitalWrite(coil6_A,HIGH);
  digitalWrite(coil6_B,LOW);
  
  
}

//******************************APAGAR BOBINAS**************************************
void off_bob1(){
  Serial.println("offbob1");
  digitalWrite(coil1_A,LOW);
  digitalWrite(coil1_B,LOW);
}

void off_bob2(){
  Serial.println("offbob2");
  digitalWrite(coil2_A,LOW);
  digitalWrite(coil2_B,LOW);
}

void off_bob3(){
  Serial.println("offbob3");
  digitalWrite(coil3_A,LOW);
  digitalWrite(coil3_B,LOW);
}

void off_bob4(){
  Serial.println("offbob4");
  digitalWrite(coil4_A,LOW);
  digitalWrite(coil4_B,LOW);
}

void off_bob5(){
  Serial.println("offbob5");
  digitalWrite(coil5_A,LOW);
  digitalWrite(coil5_B,LOW);
}

void off_bob6(){
  Serial.println("offbob6");
  digitalWrite(coil6_A,LOW);
  digitalWrite(coil6_B,LOW);
}