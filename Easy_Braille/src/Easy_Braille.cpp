#include <Arduino.h>
#include <serial_mp3.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);

  //Serial2.begin(9600);
  mp3.begin(9600);
  delay(500);
 
  sendCommand(CMD_SEL_DEV, DEV_TF);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:

  char c = ' ';
 
  // If there a char on Serial call sendMP3Command to sendCommand
  if ( Serial.available() )
  {
    c = Serial.read();
    sendMP3Command(c);
  }
 
  // Check for the answer.
  if (mp3.available())
  {
    Serial.println(decodeMP3Answer());
  }
  delay(100);
  

}