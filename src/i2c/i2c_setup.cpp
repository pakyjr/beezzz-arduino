#include "i2c_setup.h"

void setup_accel()
{
    Serial.begin(9600);

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