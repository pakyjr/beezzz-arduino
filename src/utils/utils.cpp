#include "utils.h"

Config::Config()
    : mqttServer("192.168.1.100"),
      mqttPort(1883),
      wifiSSID("your_SSID"),
      wifiPassword("your_password") {}

Config &Config::getInstance()
{
    static Config instance;
    return instance;
}