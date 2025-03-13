#include <Arduino.h>

#include "./i2s/i2s_setup.h"
#include "./i2c/i2c_setup.h"
#include "./mqtt/mqtt.h"

void setup(void)
{
    // wifi setup
    setupMQTT();

    // uncomment to read accel data
    //  setup_accel();

    // uncomment to read mic data
    setup_mic(115200);
}

void loop(void)
{
    // wifi/mqtt
    loopMQTT();

    // uncomment to read accel data
    //  sensors_event_t event;
    //  loop_accel(event);

    // uncomment to read mic data
    int16_t sample;
    loop_mic(sample);
}
