#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>

//Replace with your network credentials
const char* ssid = "iPhone de François";
const char* password = "patapouf";

//Variables for the different pins of the motors
//motor1
const int direction_motor1 = 32;
const int value_motor1 = 33;
//motor2
const int direction_motor2 = 0;
const int value_motor2 = 4;
//motor3
const int direction_motor3 = 26;
const int value_motor3 = 27;
//motor4
const int direction_motor4 = 2;
const int value_motor4 = 15;

AsyncWebServer server(80);

void setup() {
  // put your setup code here, to run once:


  //----------------------------------------------------Serial
  Serial.begin(115200);//you have to put the same value than the monitor_speed in platformio.ini
  Serial.println("\n");


  //----------------------------------------------------GPIO
  //It is necessary to indicate that the pins of the motors will be OUTPUT because they are INPUT/OUTPUT (they accept both)
  //motor1
  pinMode(direction_motor1, OUTPUT);//pin for the direction of rotation of the motor
  pinMode(value_motor1, OUTPUT);//pin for motor rotation value

  //motor2
  pinMode(direction_motor2, OUTPUT);//pin for the direction of rotation of the motor
  pinMode(value_motor2, OUTPUT);//pin for motor rotation value

  //motor3
  pinMode(direction_motor3, OUTPUT);//pin for the direction of rotation of the motor
  pinMode(value_motor3, OUTPUT);//pin for motor rotation value

  //motor4
  pinMode(direction_motor4, OUTPUT);//pin for the direction of rotation of the motor
  pinMode(value_motor4, OUTPUT);//pin for motor rotation value

  //Set outputs to LOW to immobilize the robot at the start
  //motor1
  digitalWrite(direction_motor1, LOW);
  digitalWrite(value_motor1, LOW);
  //motor2
  digitalWrite(direction_motor2, LOW);
  digitalWrite(value_motor2, LOW);
  //motor3
  digitalWrite(direction_motor3, LOW);
  digitalWrite(value_motor3, LOW);
  //motor4
  digitalWrite(direction_motor4, LOW);
  digitalWrite(value_motor4, LOW);


  //----------------------------------------------------SPIFFS
  if(!SPIFFS.begin())
  {
    Serial.println("Erreur SPIFFS...");
    return;
  }

  //We want to print all the files to be sure of their existence
  File root = SPIFFS.open("/");
  File file = root.openNextFile();

  while(file)
  {
    Serial.print("File: ");
    Serial.println(file.name());
    file.close();
    file = root.openNextFile();
  }


  //----------------------------------------------------WIFI
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

	
	while(WiFi.status() != WL_CONNECTED)
	{
		Serial.print(".");
		delay(500);
	}
	
  //Print local IP address and start web server after
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());


  //----------------------------------------------------SERVER
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    request->send(SPIFFS, "/index.html", "text/html");
  });

  server.on("/w3.css", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    request->send(SPIFFS, "/w3.css", "text/css");
  });

  server.on("/script.js", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    request->send(SPIFFS, "/script.js", "text/javascript");
  });

  //Clockwise rotation
  server.on("/clock/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, HIGH);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, HIGH);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, HIGH);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, HIGH);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  server.on("/stop", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, LOW);
    digitalWrite(value_motor1, LOW);
    //motor2
    digitalWrite(direction_motor2, LOW);
    digitalWrite(value_motor2, LOW);
    //motor3
    digitalWrite(direction_motor3, LOW);
    digitalWrite(value_motor3, LOW);
    //motor4
    digitalWrite(direction_motor4, LOW);
    digitalWrite(value_motor4, LOW);
    request->send(200);
  });

  //Anticlockwise rotation
  server.on("/anticlock/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, LOW);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, LOW);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, LOW);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, LOW);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  //Left front diagonal
  server.on("/leftfront/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, LOW);
    digitalWrite(value_motor1, LOW);
    //motor2
    digitalWrite(direction_motor2, LOW);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, HIGH);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, LOW);
    digitalWrite(value_motor4, LOW);
    request->send(200);
  });

  //Forward
  server.on("/forward/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, HIGH);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, LOW);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, HIGH);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, LOW);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  //Right front diagonal
  server.on("/rightfront/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, HIGH);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, LOW);
    digitalWrite(value_motor2, LOW);
    //motor3
    digitalWrite(direction_motor3, LOW);
    digitalWrite(value_motor3, LOW);
    //motor4
    digitalWrite(direction_motor4, LOW);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  //Left
  server.on("/left/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, LOW);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, LOW);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, HIGH);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, HIGH);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  //Right
  server.on("/right/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, HIGH);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, HIGH);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, LOW);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, LOW);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  //Left rear diagonal
  server.on("/leftrear/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, LOW);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, LOW);
    digitalWrite(value_motor2, LOW);
    //motor3
    digitalWrite(direction_motor3, LOW);
    digitalWrite(value_motor3, LOW);
    //motor4
    digitalWrite(direction_motor4, HIGH);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  //Backward
  server.on("/backward/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, LOW);
    digitalWrite(value_motor1, HIGH);
    //motor2
    digitalWrite(direction_motor2, HIGH);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, LOW);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, HIGH);
    digitalWrite(value_motor4, HIGH);
    request->send(200);
  });

  //Right rear diagonal
  server.on("/rightrear/on", HTTP_GET, [](AsyncWebServerRequest *request)
  {
    //motor1
    digitalWrite(direction_motor1, LOW);
    digitalWrite(value_motor1, LOW);
    //motor2
    digitalWrite(direction_motor2, HIGH);
    digitalWrite(value_motor2, HIGH);
    //motor3
    digitalWrite(direction_motor3, LOW);
    digitalWrite(value_motor3, HIGH);
    //motor4
    digitalWrite(direction_motor4, LOW);
    digitalWrite(value_motor4, LOW);
    request->send(200);
  });


  server.begin();//start the server
  Serial.println("Web server is active, you can control your robot !");



}

void loop() {
  // put your main code here, to run repeatedly:
  // not necessary here because we work in asynchronous mode
}