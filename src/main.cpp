#include <Arduino.h>
#include <Wire.h>
#include <I2S.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

#include "./i2s/i2s_setup.h"

#define I2S_WS 15  // Word Select (LRCL)
#define I2S_SD 32  // Serial Data (DOUT)
#define I2S_SCK 14 // Serial Clock (BCKL)

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified();

void setup_accel();
void loop_accel(sensors_event_t);

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

void setup_accel()
{
    Serial.begin(9600); //

    if (!accel.begin())
    {
        Serial.println("No ADXL345 sensor detected.");
        while (1)
            ;
    }
}

void loop_accel(sensors_event_t event)
{
    accel.getEvent(&event);
    Serial.print("X: ");
    Serial.print(event.acceleration.x);
    Serial.print("  ");
    Serial.print("Y: ");
    Serial.print(event.acceleration.y);
    Serial.print("  ");
    Serial.print("Z: ");
    Serial.print(event.acceleration.z);
    Serial.print("  ");
    Serial.println("m/s^2 ");
    delay(500);
}