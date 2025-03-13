#include <WiFi.h>
#include <PubSubClient.h>
#include "./utils/utils.h"

#include <WiFi.h>
#include <PubSubClient.h>

WiFiClient espClient;
PubSubClient client;

void connectWiFi();
void connectMQTT();