#include <WiFi.h>
#include "config.h"

void setup()
{

    Serial.begin(115200);
    while(!Serial){delay(100);}

 

    // We start by connecting to a WiFi network
    Serial.println();
    Serial.println("******************************************************");
    Serial.print("Connecting to ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");

    }

 

    Serial.println("");

    Serial.println("WiFi connected");

    Serial.println("IP address: ");

    Serial.println(WiFi.localIP());

}

 

void loop(){}