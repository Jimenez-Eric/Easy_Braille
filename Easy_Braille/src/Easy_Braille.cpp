#include <Arduino.h>
#include <serial_mp3.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  reproducir();
  Serial.println("La  suma de a + b es ");
  Serial.println(c);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  

}