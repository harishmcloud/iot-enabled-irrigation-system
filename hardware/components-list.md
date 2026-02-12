# Hardware Components

This document lists the hardware components used in the
IoT Enabled Irrigation System along with their roles in the system.

---

## 1. Arduino UNO

- Microcontroller: ATmega328P
- Operating Voltage: 5V
- Role:
  - Controls irrigation logic
  - Processes soil moisture readings
  - Activates relay for pump control

---

## 2. ESP8266 (NodeMCU)

- Wi-Fi Enabled Microcontroller
- Operating Voltage: 3.3V
- Role:
  - Handles wireless communication
  - Transmits sensor data to IoT platform
  - Enables remote monitoring

---

## 3. Soil Moisture Sensor

- Type: Resistive Soil Moisture Sensor
- Output: Analog
- Role:
  - Measures water content in soil
  - Provides input for irrigation decision-making

---

## 4. DHT22 Temperature and Humidity Sensor

- Measures:
  - Ambient Temperature
  - Relative Humidity
- Role:
  - Provides environmental data for monitoring

---

## 5. 5V Relay Module

- Type: Single Channel Relay
- Role:
  - Electrically isolates low-voltage control circuit
  - Switches water pump ON/OFF

---

## 6. Submersible Water Pump

- Operating Voltage: 6V
- Role:
  - Supplies water when irrigation is triggered

---

## 7. Power Supply

- 5V supply for Arduino and relay
- 3.3V/USB supply for ESP8266

---

## 8. Supporting Components

- Breadboard
- Jumper Wires
- External Battery / Adapter