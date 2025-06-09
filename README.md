# 🐝 ESP32 Bee Hive Monitoring System

iOS app repos: https://github.com/pakyjr/Beezz-iOS

This project uses an ESP32 microcontroller to monitor bee hive activity in real time. It captures audio frequency data via a microphone sensor and sends it to a remote server using MQTT.

## 📦 Features

- Real-time audio data collection from the hive
- Frequency analysis on-device 
- MQTT communication
- Low-power and WiFi-enabled via ESP32
- Easily expandable with sensors (temperature, humidity, etc.)

## 🚀 Getting Started

### Requirements

- ESP32 development board
- Microphone sensor (I2S)
- Arduino IDE or PlatformIO
- MQTT broker (e.g., Mosquitto)

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/esp32-beehive-monitor.git
2.	Upload the firmware to your ESP32.
