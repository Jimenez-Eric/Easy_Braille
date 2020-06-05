#include <Arduino.h>
#include <serial_mp3.h>
#include <abecedario.h>

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
int state = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mp3.begin(9600);
 
  //sendCommand(CMD_SEL_DEV, DEV_TF);

  pinMode(nexButton, INPUT_PULLUP);
  pinMode(backButton, INPUT_PULLUP);
  pinMode(enterButton, INPUT_PULLUP);
}

void loop() {
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

void menu()
{
  static int contador3 = 0;
  bool enterPressed = false;

  readButtons();
  while (1)
  {
    readButtons();
    if (millis() >= contador3)
    {
      contador3 = millis() + 1000;
      Serial.println("Estas en el menu de seleccion modo tutor presiona enter para entrar en este modo");
    }
    if(enterButtonPressed == 0)
    {
      enterPressed = true;
      break;
    }
    if(nexButtonPressed == 0 || backButtonPressed == 0)
    {
      delay(20);
      break;
    }
  }

  if(enterPressed)
  {
    state = 2;
  }

  if (!enterPressed)
  {
    while (1)
    {
      readButtons();
      if (millis() >= contador3)
      {
        contador3 = millis() + 1000;
        Serial.println("Estas en el menu de seleccion modo solo presiona enter para entrar en este modo");
      }
      if (enterButtonPressed == 0)
      {
        enterPressed = true;
        break;
      }
      if (nexButtonPressed == 0 || backButtonPressed == 0)
      {
        delay(20);
        break;
      }
    }
    if (enterPressed)
    {
      state = 3;
    }
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
  int timeEnterPressed = 0;

    readButtons();
    while (enterButtonPressed == 0)
    {
      readButtons();
      timeEnterPressed++;
      Serial.println(timeEnterPressed);
    }

    if (millis() >= contador)
    {
      contador = millis() + 1000;
      Serial.println("Estoy en modo tutor presionaste enter");
    }
    if (timeEnterPressed >= 500)
    {
      timeEnterPressed = 0;
      delay(20);
      state = 1;
    }

  
}

void soloMode()
{
  static int contador1 = 1000;
  int timeEnterPressed = 0;
    readButtons();
    while (enterButtonPressed == 0)
    {
      readButtons();
      timeEnterPressed++;
    }
    if (millis() >= contador1)
    {
      contador1 = millis() + 1000;
      Serial.println("Estoy en modo solo presionaste enter");
    }
    if (timeEnterPressed >= 500)
    {
      timeEnterPressed = 0;
      delay(20);
      state = 1;
    }
}