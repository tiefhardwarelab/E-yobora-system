
#include <ESP8266WIiFi.h>
#include <ThingsESP.h>

ThingESP8266 thing("tiefhardwarelab", "Eyobora", "tief.e-yobora" );
//ThingESP8266ESP Thing("Username", "Project name", "ptoject device Credentials");

int Itara = D2;

//Aho itara ricometse

unsigned long previousMillis = 0;

const long INTERVAL = 6000;

void setup()
{
  Serial.begin(115200);

  pinMode(Itara, OUTPUT);

  thing.setWiFi("t115187@ltr.liquidtelecom.com", "m6XTyr4uv2");
//    thing.setWiFi("WiFi Name", "WiFi Password");


  thing.initDevice();
  }
