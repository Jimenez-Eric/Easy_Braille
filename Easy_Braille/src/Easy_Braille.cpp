#include <Arduino.h>

#define AIN1 27
#define AIN2 26
#define AIN3 25
#define AIN4 33


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(AIN3, OUTPUT);
  pinMode(AIN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hola mundo");
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  

}