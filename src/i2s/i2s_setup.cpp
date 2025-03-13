#include "i2s_setup.h"

void setup_mic(int serial)
{
    Serial.begin(serial);

    I2S.setAllPins(I2S_SCK, I2S_WS, I2S_SD, -1, -1);
    I2S.begin(I2S_PHILIPS_MODE, 16000, 16); // 16kHz, 16-bit depth
}

void loop_mic(int16_t sample)
{
    while (I2S.available())
    {
        sample = I2S.read();
        Serial.println(sample);
    }
}