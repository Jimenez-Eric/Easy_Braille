#include <Arduino.h>

#define AIN1 27
#define AIN2 26
#define AIN3 25
#define AIN4 33
#define Enter 38
#define izquierda 39
#define derecha 40

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(AIN3, OUTPUT);
  pinMode(AIN4, OUTPUT);
  pinMode(Enter, INPUT);
}

void loop() {

  //Menu de bienvenida.

  //Sonidito de bienbvenida.

  //Continuar presiona Enter.
  while(Enter==1){

  delay(5000);
  //Para acceder al modod tutor presiona el boton izq
  if(izquierda==1){
    //TUTOR
  }


  if(derecha==1){
    //AUTONOMO
  }
//puto biejoto
  }
  // put your main code here, to run repeatedly:
}
/*menu puede ser con la estructura que quieras ya sea while switch if 
primero una bienvenida ya sea que la hagamos por audio cuando esta arrancando (grabar un mensaje de bienvenida)

Modo autonomo o Modo Tutor 
si seleccionas autonomo que te mande al menu de autonomo donde podras saltar las letras preconfiguradas con los botones es decir que empieze con la bocal A y que te preguinte si la
quieres repetir o pasar a la siguiente y asi sucesivamente
si seleccionas modo tutor se pondra a la escucha de la app que se va a desarrollar es decir que ahora la app tomara el control del hardware es decir con la app le dices que letra 
mostrar*/