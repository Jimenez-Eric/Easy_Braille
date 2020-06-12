#include "Arduino.h"

#include "abecedario.h"
#include "serial_mp3.h"

abecedario miabecedario;
serial_mp3 miserial_mp3;


#define nexButton 5
#define backButton 15
#define enterButton 14 




void menu();
void volOrchangue();
void nextBack();
void readButtons();
void soloMode();
void tutorMode();

int enterButtonPressed = 1;
int nexButtonPressed = 1;
int backButtonPressed = 1;
int timeEnterPressed = 0;
int state = 1;
int letra = 1;
bool enterPressed = false;
bool soloModeEnter = false;
bool tutorModeEnter = false;


void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  //mp3.begin(9600);

  //sendCommand(CMD_SEL_DEV, DEV_TF);
  //sendMP3Command('r');

  pinMode(nexButton, INPUT_PULLUP);
  pinMode(backButton, INPUT_PULLUP);
  pinMode(enterButton, INPUT_PULLUP);

  miabecedario.letra_A();
  
}

void loop()
{
  // put your main code here, to run repeatedly:


  switch (state)
  {
  case 1:
    menu();
    break;
  case 2:
    tutorMode();
    break;
  case 3:
    soloMode();
    break;

  default:
    break;
  }
}

void volOrchangue(){

  /*Esta funcion sirve para los botones de siguiente y volumen si se deja presionado por mas de 1s el volumen bajara o subira
  si es un solo pulso cambiara la letra hacia adelante o hacia atras, segun el boton presionado*/

  int timePressed = 0;
  
  bool nexPressed = false;
  bool backPressed = false;

  readButtons();

  while(nexButtonPressed == 0 || backButtonPressed == 0) 
  {
    timePressed++;
    //Serial.println("Estoy en el while");
    //Serial.println(timePressed);
    readButtons();
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
        letra++;
        //sendMP3Command('>');
        delay(500);
        //Serial.println("Envie >");
        timePressed = 0;
        nexPressed = false;
      }
      else if (backPressed)
      {
        letra--;
        //sendMP3Command('<');
        delay(500);
        //Serial.println("Envie <");
        timePressed = 0;
        backPressed = false;
      }
    }
    else
    {
      if (nexPressed)
      {
        //sendMP3Command('+');
        delay(500);
        //Serial.println("Envie +");
        timePressed = 0;
        nexPressed = false;
      }
      else if (backPressed)
      {
        //sendMP3Command('-');
        delay(500);
        //Serial.println("Envie -");
        timePressed = 0;
        backPressed = false;
      }
    }
  }
}

void menu()
{
  static int contador3 = 0;
  soloModeEnter = false;
  tutorModeEnter = false;

  readButtons();
  while (nexButtonPressed == 1 && backButtonPressed == 1)
  {
    readButtons();
    if (millis() > contador3)
    {
      contador3 = millis() + 1000;
      Serial.println("Estas en la selecion de modo tutor");
    }
    if (enterButtonPressed == 0)
    {
      state = 2;
      enterPressed = true;
      break;
    }
  }

  delay(300);
  if (!enterPressed)
  {
    readButtons();
    while (nexButtonPressed == 1 && backButtonPressed == 1)
    {
      readButtons();
      if (millis() > contador3)
      {
        contador3 = millis() + 1000;
        Serial.println("Estas en la selecion de modo solo");
      }
      if (enterButtonPressed == 0)
      {
        state = 3;
        enterPressed = true;
        letra = 1;
        break;
      }
    }
    delay(300);
  }
}

void nextBack(){

  


}

void readButtons()
{
  nexButtonPressed = digitalRead(nexButton);
  backButtonPressed = digitalRead(backButton);
  enterButtonPressed = digitalRead(enterButton);
}

void tutorMode()
{
  static int contador = 1000;
  timeEnterPressed = 0;

  readButtons();
  while (enterButtonPressed == 0)
  {
    readButtons();
    timeEnterPressed++;
    Serial.println(timeEnterPressed);
  }

  if (!tutorModeEnter)
  {
    Serial.println("Estoy en modo tutor");
    tutorModeEnter = true;
  }
  if (timeEnterPressed >= 500)
  {
    timeEnterPressed = 0;
    state = 1;
    enterPressed = false;
    //sendMP3Command('r');
    delay(500);
  }
}

void soloMode()
{
  static int contador1 = 1000;
  timeEnterPressed = 0;
  readButtons();
  while (enterButtonPressed == 0)
  {
    readButtons();
    timeEnterPressed++;
    Serial.println(timeEnterPressed);
  }
  if (!soloModeEnter)
  {
    contador1 = millis() + 1000;
    Serial.println("Estas en modo solo"); // aqui deberiamos de mandor un audio para confirmar que estamos en modo solo
    soloModeEnter = true;
    //sendMP3Command('1');
  }
  if (timeEnterPressed >= 500)
  {
    timeEnterPressed = 0;
    state = 1;
    enterPressed = false;
    //sendMP3Command('r');
    delay(500);
  }

  volOrchangue();

}
