#pragma once
#include <Arduino.h>
#include <Wire.h>
#include <I2S.h>

#define I2S_WS 15  // Word Select (LRCL)
#define I2S_SD 32  // Serial Data (DOUT)
#define I2S_SCK 14 // Serial Clock (BCKL)

void setup_mic(int serial);
void loop_mic(int16_t sample);
