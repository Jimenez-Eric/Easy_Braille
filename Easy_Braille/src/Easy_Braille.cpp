#include <Arduino.h>

#define AIN1 13
#define AIN2 4
#define AIN3 27
#define AIN4 26

#define BIN1 25
#define BIN2 33
#define BIN3 32
#define BIN4 23
 
#define CIN1 22
#define CIN2 21
#define CIN3 19
#define CIN4 18

#define tiempo 40

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(AIN3, OUTPUT);
  pinMode(AIN4, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(BIN3, OUTPUT);
  pinMode(BIN4, OUTPUT);
  pinMode(CIN1, OUTPUT);
  pinMode(CIN2, OUTPUT);
  pinMode(CIN3, OUTPUT);
  pinMode(CIN4, OUTPUT);
  
  pinMode(Enter, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:




}
//***************************************ENCENDER BOBINAS******************************************************
void on_bob1(){
  Serial.println("onbob1");
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  delay(tiempo);
  digitalWrite(AIN2,LOW);
  
}
void on_bob2(){
  Serial.println("onbob2");
  digitalWrite(AIN3,LOW);
  digitalWrite(AIN4,HIGH);
  delay(tiempo);
  digitalWrite(AIN4,LOW);
}
void on_bob3(){
  Serial.println("onbob3");
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,HIGH);
  delay(tiempo);
  digitalWrite(BIN2,LOW);
}
void on_bob4(){
  Serial.println("onbob4");
  digitalWrite(BIN3,LOW);
  digitalWrite(BIN4,HIGH);
  delay(tiempo);
  digitalWrite(BIN4,LOW);
}
void on_bob5(){
  Serial.println("onbob5");
  digitalWrite(CIN1,LOW);
  digitalWrite(CIN2,HIGH);
  delay(tiempo);
  digitalWrite(CIN2,LOW);
}
void on_bob6(){
  Serial.println("onbob6");
  digitalWrite(CIN3,LOW);
  digitalWrite(CIN4,HIGH);
  delay(tiempo);
  digitalWrite(CIN4,LOW);
}
//***************************************APAGAR BOBINAS**********************************************
void off_bob1 (){
  Serial.println("offbob1");
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  delay(tiempo);
  digitalWrite(AIN1,LOW);
}
void off_bob2 (){
  Serial.println("offbob2");
  digitalWrite(AIN3,HIGH);
  digitalWrite(AIN4,LOW);
  delay(tiempo);
  digitalWrite(AIN3,LOW);
}
void off_bob3 (){
  Serial.println("offbob3");
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2,LOW);
  delay(tiempo);
  digitalWrite(BIN1,LOW);
}
void off_bob4 (){
  Serial.println("offbob4");
  digitalWrite(BIN3,HIGH);
  digitalWrite(BIN4,LOW);
  delay(tiempo);
  digitalWrite(BIN3,LOW);
}
void off_bob5 (){
  Serial.println("offbob5");
  digitalWrite(CIN1,HIGH);
  digitalWrite(CIN2,LOW);
  delay(tiempo);
  digitalWrite(CIN1,LOW);
}
void off_bob6 (){
  Serial.println("offbob6");
  digitalWrite(CIN3,HIGH);
  digitalWrite(CIN4,LOW);
  delay(tiempo);
  digitalWrite(CIN3,LOW);
}

