#include <Arduino.h>

#include "./i2s/i2s_setup.h"
#include "./i2c/i2c_setup.h"

void setup(void)
{
    // setup_accel();
    setup_mic();
}

void loop(void)
{

    // sensors_event_t event;
    // loop_accel(event);
    int16_t sample;
    loop_mic(sample);
}
