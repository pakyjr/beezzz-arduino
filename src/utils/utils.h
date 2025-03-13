#ifndef CONFIG_H
#define CONFIG_H

class Config
{
public:
    static Config &getInstance();

    const char *mqttServer;
    int mqttPort;
    const char *wifiSSID;
    const char *wifiPassword;

    Config(const Config &) = delete;
    void operator=(const Config &) = delete;

private:
    Config();
};

#endif // CONFIG_H