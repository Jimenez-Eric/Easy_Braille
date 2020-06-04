#include <Arduino.h>
#include <serial_mp3.h>
#include <abecedario.h>

#define nexButton 5
#define backButton 15

void volOrchangue();

int nexButtonPressed = 0;
int backButtonPressed = 0;

int timePressed = 0;
bool nexPressed = false;
bool backPressed = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);

  //Serial2.begin(9600);
  mp3.begin(9600);
  delay(500);
 
  //sendCommand(CMD_SEL_DEV, DEV_TF);
  delay(500);

  pinMode(nexButton, INPUT_PULLUP);
  pinMode(backButton, INPUT_PULLUP);

  //sendMP3Command('p');
}

void loop() {
  // put your main code here, to run repeatedly:

  //sendMP3Command('p');  // con esta funcion se puede mandar el parametro para reproducir sin meter nada al serial
  //delay(1000);

/*  char c = ' ';
 
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
  delay(100);*/

  volOrchangue();
  
  
  

  

}


void volOrchangue(){

  /*Esta funcion sirve para los botones de siguiente y volumen si se deja presionado por mas de 1s el volumen bajara o subira
  si es un solo pulso cambiara la letra hacia adelante o hacia atras, segun el boton presionado*/

  nexButtonPressed = digitalRead(nexButton);
  backButtonPressed = digitalRead(backButton);

  while(nexButtonPressed == 0 || backButtonPressed == 0) 
  {
    timePressed++;
    //Serial.println("Estoy en el while");
    //Serial.println(timePressed);
    nexButtonPressed = digitalRead(nexButton);
    backButtonPressed = digitalRead(backButton);
    if (nexButtonPressed == 0)
    {
      nexPressed = true;
    }
    else if (backButtonPressed == 0)
    {
      backPressed = true;
    }
    delay(20);
 
  }
  

  if (nexPressed | backPressed)
  {
    if (timePressed < 15)
    {
      if (nexPressed)
      {
        sendMP3Command('>');
        //Serial.println("Envie >");
        timePressed = 0;
        nexPressed = false;
      }
      else if (backPressed)
      {
        sendMP3Command('<');
        //Serial.println("Envie <");
        timePressed = 0;
        backPressed = false;
      }
      
      
    }
    else
    {
      if (nexPressed)
      {
        sendMP3Command('+');
        //Serial.println("Envie +");
        timePressed = 0;
        nexPressed = false;
      }
      else if (backPressed)
      {
        sendMP3Command('-');
        //Serial.println("Envie -");
        timePressed = 0;
        backPressed = false;
      }
    }
  }
}