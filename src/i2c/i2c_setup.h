#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

extern Adafruit_ADXL345_Unified accel;

void setup_accel();
void loop_accel(sensors_event_t);
void print_accel(sensors_event_t);