#include "Arduino.h"

#include "abecedario.h"
#include "serial_mp3.h"
#include <WiFi.h>
#include <ESPmDNS.h>

abecedario miabecedario;
serial_mp3 miMp3;


#define nexButton 5
#define backButton 15
#define enterButton 14 




void menu();
void volOrchangue();
void nextBack();
void readButtons();
void soloMode();
void tutorMode();
void servidor();

int enterButtonPressed = 1;
int nexButtonPressed = 1;
int backButtonPressed = 1;
int timeEnterPressed = 0;
int state = 1;
int letra = 0;
bool enterPressed = false;
bool soloModeEnter = false;
bool tutorModeEnter = false;
bool iniciarServidor = false;
bool fistStar = true;

// Replace with your network credentials
const char* ssid = "**********";
const char* password = "***********";
// Set web server port number to 80
WiFiServer server(80);
// Variable to store the HTTP request
String header;
// Auxiliar variables to store the current output state
String ledInterno2 = "off";
unsigned long currentTime = millis();
// Previous time
unsigned long previousTime = 0; 
// Define timeout time in milliseconds (example: 2000ms = 2s)
const long timeoutTime = 2000;


void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);

  
  //miMp3.sendCommand(CMD_SEL_DEV, DEV_TF);
  

  pinMode(nexButton, INPUT_PULLUP);
  pinMode(backButton, INPUT_PULLUP);
  pinMode(enterButton, INPUT_PULLUP);
  

  // Connect to Wi-Fi network with SSID and password
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Print local IP address and start web server
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  if (!MDNS.begin("Easy_Braille1")) {
      
    }
   else{
   server.begin();
   MDNS.addService("http", "tcp", 80); 
   }

   miMp3.sendMP3Command('r');
   miMp3.sendMP3Command('2');
   
  
  
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
        if(letra >= 27)
        {
          letra = 1;
        }
        miMp3.sendMP3Command('>');
        miabecedario.letraBraille(letra);
        delay(500);
        //Serial.println("Envie >");
        timePressed = 0;
        nexPressed = false;
      }
      else if (backPressed)
      {
        letra--;
        if(letra <= 0)
        {
          letra = 26;
        }
        miMp3.sendMP3Command('<');
        miabecedario.letraBraille(letra);
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
        miMp3.sendMP3Command('+');
        delay(500);
        //Serial.println("Envie +");
        timePressed = 0;
        nexPressed = false;
      }
      else if (backPressed)
      {
        miMp3.sendMP3Command('-');
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

  if(fistStar)
  {
    
    fistStar = false;
    delay(3000);
  }

  readButtons();
  while (nexButtonPressed == 1 && backButtonPressed == 1)
  {
    readButtons();
    if (millis() > contador3)
    {
      contador3 = millis() + 10000;
      Serial.println("Estas en la selecion de modo tutor");
      miMp3.sendMP3Command('3');
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
        contador3 = millis() + 10000;
        miMp3.sendMP3Command('4');
        Serial.println("Estas en la selecion de modo solo");
      }
      if (enterButtonPressed == 0)
      {
        state = 3;
        enterPressed = true;
        letra = 0;
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
  servidor();
  while (enterButtonPressed == 0)
  {
    readButtons();
    timeEnterPressed++;
    Serial.println(timeEnterPressed);
  }

  if (!tutorModeEnter)
  {
    Serial.println("Estoy en modo tutor");
    miMp3.sendMP3Command('5');
    tutorModeEnter = true;
    iniciarServidor = true;
  }
  if (timeEnterPressed >= 500)
  {
    iniciarServidor = false;
    //server.close();
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
    miMp3.sendMP3Command('6');
    soloModeEnter = true;
    delay(11000);
    miMp3.sendMP3Command('1');
  }
  if (timeEnterPressed >= 500)
  {
    timeEnterPressed = 0;
    state = 1;
    enterPressed = false;
    miMp3.sendMP3Command('r');
    delay(500);
  }

  volOrchangue();

}

void servidor()
{
  if(iniciarServidor){
    
  WiFiClient client = server.available();   // Listen for incoming clients

  if (client)
  { // If a new client connects,
    currentTime = millis();
    previousTime = currentTime;
    Serial.println("New Client."); // print a message out in the serial port
    String currentLine = "";       // make a String to hold incoming data from the client
    while (client.connected() && currentTime - previousTime <= timeoutTime)
    { // loop while the client's connected
      currentTime = millis();
      if (client.available())
      {                         // if there's bytes to read from the client,
        char c = client.read(); // read a byte, then
        Serial.write(c);        // print it out the serial monitor
        header += c;
        if (c == '\n')
        { // if the byte is a newline character
          // if the current line is blank, you got two newline characters in a row.
          // that's the end of the client HTTP request, so send a response:
          if (currentLine.length() == 0)
          {
            // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
            // and a content-type so the client knows what's coming, then a blank line:
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();

            // turns the GPIOs on and off
            if (header.indexOf("GET /A/on") >= 0)
            {
              Serial.println("Server letra A");
               miabecedario.letra_A();
            }
            else if (header.indexOf("GET /B/on") >= 0)
            {
              Serial.println("Server letra B");
               miabecedario.letra_B();
            }
            else if (header.indexOf("GET /C/on") >= 0)
            {
              Serial.println("Server letra C");
               miabecedario.letra_C();
            }
            else if (header.indexOf("GET /D/on") >= 0)
            {
              Serial.println("Server letra D");
               miabecedario.letra_D();
            }
            else if (header.indexOf("GET /E/on") >= 0)
            {
              Serial.println("Server letra E");
               miabecedario.letra_E();
            }
            else if (header.indexOf("GET /F/on") >= 0)
            {
              Serial.println("Server letra F");
               miabecedario.letra_F();
            }
            else if (header.indexOf("GET /G/on") >= 0)
            {
              Serial.println("Server letra G");
               miabecedario.letra_G();
            }
            else if (header.indexOf("GET /H/on") >= 0)
            {
              Serial.println("Server letra H");
               miabecedario.letra_H();
            }
            else if (header.indexOf("GET /I/on") >= 0)
            {
              Serial.println("Server letra I");
               miabecedario.letra_I();
            }
            else if (header.indexOf("GET /J/on") >= 0)
            {
              Serial.println("Server letra J");
               miabecedario.letra_J();
            }
            else if (header.indexOf("GET /K/on") >= 0)
            {
              Serial.println("Server letra K");
               miabecedario.letra_K();

            }
            else if (header.indexOf("GET /L/on") >= 0)
            {
              Serial.println("Server letra L");
               miabecedario.letra_L();
            }
            else if (header.indexOf("GET /M/on") >= 0)
            {
              Serial.println("Server letra M");
               miabecedario.letra_M();
            }
            else if (header.indexOf("GET /N/on") >= 0)
            {
              Serial.println("Server letra N");
               miabecedario.letra_N();
            }
            else if (header.indexOf("GET /O/on") >= 0)
            {
              Serial.println("Server letra O");
               miabecedario.letra_O();
            }
            else if (header.indexOf("GET /R/on") >= 0)
            {
              Serial.println("Server letra R");
               miabecedario.letra_R();
            }
            else if (header.indexOf("GET /S/on") >= 0)
            {
              Serial.println("Server letra S");
               miabecedario.letra_S();
            }
            else if (header.indexOf("GET /T/on") >= 0)
            {
              Serial.println("Server letra T");
               miabecedario.letra_T();
            }
            else if (header.indexOf("GET /U/on") >= 0)
            {
              Serial.println("Server letra U");
               miabecedario.letra_U();
            }
            else if (header.indexOf("GET /V/on") >= 0)
            {
              Serial.println("Server letra V");
               miabecedario.letra_V();
            }
            else if (header.indexOf("GET /W/on") >= 0)
            {
              Serial.println("Server letra W");
               miabecedario.letra_W();
            }
            else if (header.indexOf("GET /X/on") >= 0)
            {
               miabecedario.letra_X();
              Serial.println("Server letra X");
            }
            else if (header.indexOf("GET /Y/on") >= 0)
            {
               miabecedario.letra_Y();
              Serial.println("Server letra Y");
            }
            else if (header.indexOf("GET /Z/on") >= 0)
            {
               miabecedario.letra_Z();
              Serial.println("Server letra Z");
            }

            // Display the HTML web page
            client.println("<!DOCTYPE html><html>");
            client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
            client.println("<link rel=\"icon\" href=\"data:,\">");
            // CSS to style the on/off buttons
            // Feel free to change the backg       round-color and font-size attributes to fit your preferences
            client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
            client.println(".button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px;");
            client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
            client.println(".button2 {background-color: #555555;}</style></head>");

            // Web Page Heading
            client.println("<font color=#bfe3ff><body> <h1>EasyBraile</h1> </font>");
            //client.println("<body><h1>EasyBraile</h1>");
            /****************************************************************/
            client.println("<body style=\"background-color:black;\">");
            // client.println("<font color=#bfe3ff> El viejito es joto </font>");
            // client.println("<div style='border:2px solid ##FFFFFF;'>Borde con color #000080</div>");

            // Display current state, and ON/OFF buttons for GPIO 26
            /*************/ //client.println("<p>GPIO 26 - State " + ledInterno2 + "</p>");
            // If the ledInterno2 is off, it displays the ON button

            /*  
           *  if (ledInterno2=="off") {
              client.println("<p> <a href=\"/1/on\"><button class=\"button\">A</button></a>                <a href=\"/2/on\"><button class=\"button\">B</button></a>                <a href=\"/3/on\"><button class=\"button\">C</button></a></p>");
            } else {
              client.println("<p><a href=\"/1/off\"><button class=\"button button2\">A</button></a>     <a href=\"/2/off\"><button class=\"button \">B</button></a>     <a href=\"/3/off\"><button class=\"button \">C</button></a></p>");
            } 
              */
            // Display current state, and ON/OFF buttons for GPIO 27
            /***************/ //client.println("<p>GPIO 27 - State " + output27State + "</p>");

            /*  
            *   If the output27State is off, it displays the ON button       
            if (output27State=="off") {
              client.println("<p><a href=\"/27/on\"><button class=\"button\">ON</button></a></p>");
            } else {
              client.println("<p><a href=\"/27/off\"><button class=\"button button2\">OFF</button></a></p>");
            }
            */
            client.println("</body></html>");

            // The HTTP response ends with another blank line
            client.println();
            // Break out of the while loop
            break;
          }
          else
          { // if you got a newline, then clear currentLine
            currentLine = "";
          }
        }
        else if (c != '\r')
        {                   // if you got anything else but a carriage return character,
          currentLine += c; // add it to the end of the currentLine
        }
      }
    }
    // Clear the header variable
    header = "";
    // Close the connection
    client.stop();
    Serial.println("Client disconnected.");
    Serial.println("");
    }
  }
  }