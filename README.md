#  CO2-Measurement

Microcontroller with CO2 sensor that measures value categories to display an LED warning

Embedded project on arduino Microcontroller

CO2 Measurement System with Red Warning Indicator

Project Overview
This project aims to build a CO2 measurement system that visually indicates when the CO2 levels in the air are too high. The system uses a sensor to detect CO2 concentration and activates a red warning indicator when the levels exceed a certain threshold. This can be particularly useful in environments where monitoring and maintaining optimal indoor air quality is important, such as offices, classrooms, or homes.

## Table of Contents
- Features
- Hardware Requirements
- Software Requirements
- Installation
- Usage
- Configuration
- Contributing
- License
- Features
- Real-time CO2 concentration measurement.
- Red warning indicator when CO2 levels are too high.
- Customizable threshold for triggering the warning indicator.
- Easy-to-understand visual feedback for users.
- Hardware Requirements

To build this CO2 measurement system, you will need the following hardware components:

- CO2 sensor module (Adafruit_CCS811)
- Microcontroller board (Arduino Uno)
- Red LED indicator (3x KY-004 Modules)
- Jumper wires (9 wires)
- Power supply (based on the microcontroller's requirements)

## Software Requirements

The software components required for this project are as follows:

Arduino IDE (if using Arduino as the microcontroller)
Appropriate libraries for your CO2 sensor module `Adafruit_CCS811`

## Installation

[picture of setup]

## Usage

Power on the CO2 measurement system.

The CO2 sensor will start measuring the CO2 concentration in the air.

If the CO2 levels exceed the predefined threshold, the red LED warning indicator will light up, providing a visual signal to indicate high CO2 levels.

| ppm | signal | classifcation |
|-----|--------|---------------|
| < 800| green  | high air quality |
| 800-1000 | blue | normal air quality |
| > 1000 | red | critical air quality |

Monitor the CO2 levels and take appropriate actions to improve indoor air quality (e.g., ventilation, reducing sources of CO2 emission).

## Configuration
You can customize the following parameters in the code to suit your needs:

- CO2 threshold level for triggering the warning indicator.
- Sensor calibration (if necessary).
- LED pin assignment (if using a different pin for the LED).
