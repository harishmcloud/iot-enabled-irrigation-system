# IoT Enabled Irrigation System

An Internet of Things (IoT) based irrigation system designed to automate
water supply for agricultural fields using sensor data and embedded
controllers. The system aims to optimize water usage by monitoring
environmental conditions and controlling irrigation intelligently.

---

## Project Overview

This project integrates an Arduino microcontroller and an ESP8266 Wi-Fi
module to collect sensor data such as soil moisture, temperature, and
humidity. Based on the sensed parameters, the system controls a water pump
through a relay module.

The system also supports remote monitoring through an IoT platform,
allowing users to observe real-time sensor data and system status.

---

## System Architecture

- Sensor Layer: Soil moisture and environmental sensors
- Control Layer: Arduino microcontroller
- Communication Layer: ESP8266 Wi-Fi module
- Actuation Layer: Relay-controlled water pump
- Monitoring Layer: IoT dashboard

---

## Hardware and Software Summary

### Hardware
- Arduino UNO
- ESP8266 Wi-Fi Module
- Soil Moisture Sensor
- Temperature and Humidity Sensor
- Relay Module
- Water Pump

### Software
- Arduino IDE
- Embedded C / Arduino (C++)
- IoT platform for remote monitoring

### Firmware Structure

- `software/esp8266/` – Wi-Fi communication and sensor data transmission
- `software/arduino-uno/` – Irrigation control logic (to be added)

---

## Documentation

The complete project report is available below:

- 📄 **Project Report:** [IoT Enabled Irrigation System – Project Report](docs/project-report.pdf)

The report includes:
- System architecture and block diagrams
- Hardware and software implementation
- Experimental results and discussion
- Applications and future scope