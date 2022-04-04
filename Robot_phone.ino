/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP32 chip.

  Note: This requires ESP32 support package:
    https://github.com/espressif/arduino-esp32

  Please be sure to select the right ESP32 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/
/* Comment this out to disable prints and save space */
//Be sure to put these 3 lines at the very beginning of the program, otherwise there could be an invalid token problem
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLjt_bCAqj"
#define BLYNK_DEVICE_NAME "Holonome pilotable"

//For the connection between Blynk and the phone (or tablet)
//You need to include these different libraries
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


//If this error occurs when trying to upload : "A fatal error occurred: Failed to connect to ESP32: Timed out waiting for packet header"
//Press the BOOT button throughout the upload until "Connecting" disappears to give way to the upload



//Defining the parameters needed to connect to Blynk
//Get these three lines from Blynk (2 at the very beginning of the program and one here)
//See Device Info on the Blynk App
char auth[] = "pqEzlsvnRHL_X4NOq6mevAYRYWunScqx";



//Settings specific to the home WIFI network, you have to modify the 2 following lines
char ssid[] = "iPhone de François";
char pass[] = "patapouf";

//The following lines will be used to assign a PWM channel with the ledcAttachPin function
const int freq = 5000;
const int ledChannel1 = 0;
const int ledChannel2 = 1;
const int ledChannel3 = 2;
const int ledChannel4 = 3;
const int ledChannel5 = 4;
const int ledChannel6 = 5;
const int ledChannel7 = 6;
const int ledChannel8 = 7;
const int resolution = 8;//8 bits, the values will go up to 255 (0 to 255, that is 256 values)
//The number of bits can vary but if the value in the ledcWrite is not changed, the duty cycle will vary


//After tests, we observe that when the joystick is in the middle, we are at x = 128 and y = 128
/*
 1--------2
 |        |
 |        |
 |        |
 3--------4

 \--------/
 |        |
 |        |
 |        |
 /--------\

*/
// x in horizontal and y in vertical for the joystick

void rotationHoraireRobot(int rotationHoraire)
{
  Serial.print("La valeur de rotation horaire est ");
  Serial.println(rotationHoraire);
  if (rotationHoraire == 1)
  {
    //motor1
    ledcWrite(ledChannel1, 255);//clockwise
    ledcWrite(ledChannel2, 255);//starting the engine
    //motor2
    ledcWrite(ledChannel3, 255);//clockwise
    ledcWrite(ledChannel4, 255);//starting the engine
    //motor3
    ledcWrite(ledChannel5, 255);//clockwise
    ledcWrite(ledChannel6, 255);//starting the engine
    //motor4
    ledcWrite(ledChannel7, 255);//clockwise
    ledcWrite(ledChannel8, 255);//starting the engine                                                                    

  }
  else {
    //motor1
    ledcWrite(ledChannel1, 0);//anti-clockwise
    ledcWrite(ledChannel2, 0);//shutting down the engine
    //motor2
    ledcWrite(ledChannel3, 0);//anti-clockwise
    ledcWrite(ledChannel4, 0);//shutting down the engine
    //motor3
    ledcWrite(ledChannel5, 0);//anti-clockwise
    ledcWrite(ledChannel6, 0);//shutting down the engine
    //motor4
    ledcWrite(ledChannel7, 0);//anti-clockwise
    ledcWrite(ledChannel8, 0);//shutting down the engine

  }

}

void rotationTrigoRobot(int rotationTrigo)
{
  Serial.print("La valeur de rotation trigo est ");
  Serial.println(rotationTrigo);
  if (rotationTrigo == 1)
  {
    //motor1
    ledcWrite(ledChannel1, 0);
    ledcWrite(ledChannel2, 255);
    //motor2
    ledcWrite(ledChannel3, 0);
    ledcWrite(ledChannel4, 255);
    //motor3
    ledcWrite(ledChannel5, 0);
    ledcWrite(ledChannel6, 255);
    //motor4
    ledcWrite(ledChannel7, 0);
    ledcWrite(ledChannel8, 255);
  }
  else {
    //motor1
    ledcWrite(ledChannel1, 0);
    ledcWrite(ledChannel2, 0);
    //motor2
    ledcWrite(ledChannel3, 0);
    ledcWrite(ledChannel4, 0);//shutting down the engine
    //motor3
    ledcWrite(ledChannel5, 0);
    ledcWrite(ledChannel6, 0);//shutting down the engine
    //motor4
    ledcWrite(ledChannel7, 0);
    ledcWrite(ledChannel8, 0);//shutting down the engine

  }

}


void deplacementRobot(double x, double y, double alpha) {
  double pi = 3.14159;
  if (x == 128 && y == 128) {
    //motor1
    ledcWrite(ledChannel1, 0);//anti-clockwise
    ledcWrite(ledChannel2, 0);//shutting down the engine
    //motor2
    ledcWrite(ledChannel3, 0);
    ledcWrite(ledChannel4, 0);//shutting down the engine
    //motor3
    ledcWrite(ledChannel5, 0);
    ledcWrite(ledChannel6, 0);//shutting down the engine
    //motor4
    ledcWrite(ledChannel7, 0);
    ledcWrite(ledChannel8, 0);//shutting down the engine
  }

  else if (x > 110 && x < 146 && y > 128) {
    //Déplacement selon l'axe des y du robot, vers les y compris entre 128 et 255
    //Marche avant
    Serial.print("MARCHE AVANT");
    //motor1
    ledcWrite(ledChannel1, 255);
    ledcWrite(ledChannel2, y);
    //motor2
    ledcWrite(ledChannel3, 0);
    ledcWrite(ledChannel4, y);
    //motor3
    ledcWrite(ledChannel5, 255);
    ledcWrite(ledChannel6, y);
    //motor4
    ledcWrite(ledChannel7, 0);
    ledcWrite(ledChannel8, y);
  }

  else if (x > 110 && x < 146 && y < 128) {
    //Déplacement selon l'axe des y du robot, vers les y compris entre 0 et 128
    //Marche arrière
    Serial.print("MARCHE ARRIERE");
    //motor1
    ledcWrite(ledChannel1, 0);
    ledcWrite(ledChannel2, 255 - y);
    //motor2
    ledcWrite(ledChannel3, 255);
    ledcWrite(ledChannel4, 255 - y);
    //motor3
    ledcWrite(ledChannel5, 0);
    ledcWrite(ledChannel6, 255 - y);//shutting down the engine
    //motor4
    ledcWrite(ledChannel7, 255);
    ledcWrite(ledChannel8, 255 - y);
  }

  else if (x > 128 && y > 110 && y < 146) {
    //Déplacement selon l'axe des x du robot, vers les x compris entre 128 et 255
    //Déplacement latéral droit
    Serial.print("LATERAL DROIT");
    //motor1
    ledcWrite(ledChannel1, 255);
    ledcWrite(ledChannel2, x);
    //motor2
    ledcWrite(ledChannel3, 255);
    ledcWrite(ledChannel4, x);
    //motor3
    ledcWrite(ledChannel5, 0);
    ledcWrite(ledChannel6, x);
    //motor4
    ledcWrite(ledChannel7, 0);
    ledcWrite(ledChannel8, x);
  }

  else if (x < 128 && y > 110 && y < 146) {
    //Déplacement selon l'axe des x du robot, vers les x compris entre 0 et 128
    //Déplacement latéral gauche
    Serial.print("LATERAL GAUCHE");
    //motor1
    ledcWrite(ledChannel1, 0);
    ledcWrite(ledChannel2, 255 - x);
    //motor2
    ledcWrite(ledChannel3, 0);
    ledcWrite(ledChannel4, 255 - x);
    //motor3
    ledcWrite(ledChannel5, 255);
    ledcWrite(ledChannel6, 255 - x);
    //motor4
    ledcWrite(ledChannel7, 255);
    ledcWrite(ledChannel8, 255 - x);
  }


  
 //ENTRE 0 ET PI/2
  else if (x > 146 && y > 146) {
    //Déplacement diagonale avant droite, avec alpha compris entre 0 et 45 degrés soit entre 0 et pi/4 rad
    Serial.print("DIAGONALE AVANT DROITE");
    Serial.print(" ");
    //motor1
    ledcWrite(ledChannel1, 255);//sens horaire
    ledcWrite(ledChannel2, x);//mise en fonctionnement
    //motor2
    ledcWrite(ledChannel3, 255);//sens horaire
    ledcWrite(ledChannel4, 0);//mise à l'arrêt
    //motor3
    ledcWrite(ledChannel5, 0);//sens antihoraire
    ledcWrite(ledChannel6, 0);//mise à l'arrêt
    //motor4
    ledcWrite(ledChannel7, 0);//sens antihoraire
    ledcWrite(ledChannel8, x);//mise en fonctionnement
  }


  //ENTRE PI/2 ET PI
  else if (x < 110 && y > 146) {
    //Déplacement diagonale avant gauche, avec alpha compris entre 45 et 90 degrés soit entre pi/4 et pi/2 rad
    Serial.print("DIAGONALE AVANT GAUCHE");
    Serial.print(" ");
    //motor1
    ledcWrite(ledChannel1, 255);//sens horaire
    ledcWrite(ledChannel2, 0);//mise à l'arrêt
    //motor2
    ledcWrite(ledChannel3, 0);//sens antihoraire
    ledcWrite(ledChannel4, y);//mise en fonctionnement
    //motor3
    ledcWrite(ledChannel5, 255);//sens horaire
    ledcWrite(ledChannel6, y);//mise en fonctionnement
    //motor4
    ledcWrite(ledChannel7, 0);//sens antihoraire
    ledcWrite(ledChannel8, 0);//mise à l'arrêt
  }
  
  
  //ENTRE PI ET 3PI/2
  else if (x < 110 && y < 110) {
    //Déplacement diagonale arrière gauche, avec alpha compris entre 0 et 45 degrés soit entre 0 et pi/4 rad
    Serial.print("DIAGONALE ARRIERE GAUCHE");
    Serial.print(" ");
    //motor1
    ledcWrite(ledChannel1, 0);//sens antihoraire
    ledcWrite(ledChannel2, 255 - x);//mise en fonctionnement
    //motor2
    ledcWrite(ledChannel3, 0);//sens antihoraire
    ledcWrite(ledChannel4, 0);//mise à l'arrêt
    //motor3
    ledcWrite(ledChannel5, 255);//sens horaire
    ledcWrite(ledChannel6, 0);//mise à l'arrêt
    //motor4
    ledcWrite(ledChannel7, 255);//sens horaire
    ledcWrite(ledChannel8, 255 - x);//mise en fonctionnement
  }


  //ENTRE 3PI/2 et 2PI
  else if (x > 146 && y < 110) {
    //Déplacement diagonale arrière droite, avec alpha compris entre 45 et 90 degrés soit entre pi/4 et pi/2 rad
    Serial.print("DIAGONALE ARRIERE DROITE");
    Serial.print(" ");
    //motor1
    ledcWrite(ledChannel1, 0);//sens antihoraire
    ledcWrite(ledChannel2, 0);//mise à l'arrêt
    //motor2
    ledcWrite(ledChannel3, 255);//sens horaire
    ledcWrite(ledChannel4, x);//mise en fonctionnement
    //motor3
    ledcWrite(ledChannel5, 0);//sens antihoraire
    ledcWrite(ledChannel6, x);//mise en fonctionnement
    //motor4
    ledcWrite(ledChannel7, 255);//sens horaire
    ledcWrite(ledChannel8, 0);//mise à l'arrêt
  }

}



//Button for rotating the robot in the clockwise direction
BLYNK_WRITE(V1)
{
  int rotationHoraire = param.asInt();
  Serial.print("Rotation Horaire = ");
  Serial.println(rotationHoraire);
  rotationHoraireRobot(rotationHoraire);
}

//Button for rotating the robot in the trigonometric (anti-clockwise) direction
BLYNK_WRITE(V2)
{
  int rotationTrigo = param.asInt();
  Serial.print("Rotation Trigo = ");
  Serial.println(rotationTrigo);
  rotationTrigoRobot(rotationTrigo);
}


//To be able to retrieve the value of X and Y at the same time, a MERGE joystick must be chosen in the app
//The MERGE output mode allows to return the X and Y values in the same message
BLYNK_WRITE(V10)
{
  double x = param[0].asDouble();
  double y = param[1].asDouble();
  Serial.print("X = ");
  Serial.println(x);
  Serial.print("Y = ");
  Serial.println(y);

  //The alpha angle must be calculated to determine which eighth of a circle you are in
  //We ca work with alpha = tan^-1(abs((m1 - m2)/(1 + m1m2))) which is a valid formula for acute angles
  //But here m2 = 0 since our line is horizontal, which simplifies and gives
  //So alpha = tan^-1(abs(m1))
  //And m1 = (y - y0)/(x - x0) so more specifically m1 = (y - 128)/(x - 128)
  //The result is alpha = tan^-1(abs(m1)) = tan^-1(abs((y - 128)/(x - 128)))
  double alpha = atan(abs((y - 128) / (x - 128)));
  Serial.print("ALPHA = ");
  Serial.println(alpha);
  deplacementRobot(x, y, alpha);
}

void setup() {
  // put your setup code here, to run once:


  //It is necessary to indicate that the pins of the motors will be OUTPUT because they are INPUT/OUTPUT (they accept both)
  //motor1
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  //motor2
  pinMode(0, OUTPUT);
  pinMode(4, OUTPUT);
  //motor3
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  //motor4
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);

  
  //The ledcSetup function allows to set the frequency and resolution of a PWM channel
  //Since we don't need to change the frequency value, we can place this function in the void setup()
  ledcSetup(ledChannel1, freq, resolution);
  ledcSetup(ledChannel2, freq, resolution);
  ledcSetup(ledChannel3, freq, resolution);
  ledcSetup(ledChannel4, freq, resolution);
  ledcSetup(ledChannel5, freq, resolution);
  ledcSetup(ledChannel6, freq, resolution);
  ledcSetup(ledChannel7, freq, resolution);
  ledcSetup(ledChannel8, freq, resolution);


  //The ledcAttachPin function allows to assign a GPIO pin number to one of the 16 GPIO channels (0 to 15)
  //Motor pin declaration1 , yellow cables
  ledcAttachPin(32, ledChannel1);//pin for the direction of rotation of the motor
  ledcAttachPin(33, ledChannel2);//pin for motor rotation value

  //Motor pin declaration2, green cables
  ledcAttachPin(0, ledChannel3);//pin for the direction of rotation of the motor
  ledcAttachPin(4, ledChannel4);//pin for motor rotation value

  //Motor pin declaration3, blue cables
  ledcAttachPin(26, ledChannel5);//pin for the direction of rotation of the motor
  ledcAttachPin(27, ledChannel6);//pin for motor rotation value

  //Motor pin declaration4, orange cables
  ledcAttachPin(2, ledChannel7);//pin for the direction of rotation of the motor
  ledcAttachPin(15, ledChannel8);//pin for motor rotation value

  Serial.begin(115200);//Required to read the serial port
  delay(10);

  Blynk.begin(auth, ssid, pass);

}

void loop() {
  // put your main code here, to run repeatedly:

  Blynk.run();

}
