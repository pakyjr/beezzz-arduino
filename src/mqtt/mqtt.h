#ifndef MQTT_H
#define MQTT_H

#include <WiFi.h>
#include <PubSubClient.h>
#include "./utils/utils.h"

#include <WiFi.h>
#include <PubSubClient.h>

void connectWiFi();
void connectMQTT();
void setupMQTT();
void loopMQTT();

#endif