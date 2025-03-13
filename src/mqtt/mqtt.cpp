#include <WiFi.h>
#include <PubSubClient.h>
#include "./utils/utils.h"

Config &config = Config::getInstance();

WiFiClient espClient;
PubSubClient client(espClient);

void connectWiFi()
{
    WiFi.begin(config.wifiSSID, config.wifiPassword);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("WiFi Connected!");
}

void connectMQTT()
{
    client.setServer(config.mqttServer, config.mqttPort);
    while (!client.connected())
    {
        if (client.connect("ESP32Client"))
        {
            Serial.println("MQTT Connected!");
        }
        else
        {
            Serial.print("Failed, rc=");
            Serial.print(client.state());
            Serial.println(" retrying...");
            delay(2000);
        }
    }
}