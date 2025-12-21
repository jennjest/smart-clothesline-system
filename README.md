# Automated Clothes Drying System
Rain and Light Sensor Based

## Overview
This project implements an embedded automation system that automatically retracts a clothesline when rain is detected or when the environment becomes dark. Using environmental sensors and a microcontroller, the system helps protect drying clothes without requiring manual monitoring.

This project demonstrates the integration of sensors, decision logic, and actuator control in a real-time embedded system.

## Features
- Automatic rain detection using an analog rain sensor
- Night condition detection using a light sensor (LDR)
- Servo-based automatic clothesline control
- One-time buzzer alert during system activation
- Real-time monitoring through Serial Monitor

## Technologies Used
- Arduino Uno
- C/C++ (Arduino)
- Rain Sensor (Analog)
- LDR Light Sensor (Digital Comparator)
- Servo Motor
- Buzzer
- Arduino IDE

## System Workflow
1. The system continuously reads data from the rain and light sensors.
2. If rain is detected or light intensity drops below a threshold, the servo retracts the clothesline.
3. A buzzer provides a short alert to indicate system activation.
4. When conditions return to normal, the clothesline is extended again.

## Hardware Connections
**Rain Sensor**
- VCC → 5V  
- GND → GND  
- AO → A0  

**Light Sensor (LDR)**
- VCC → 5V  
- GND → GND  
- D0 → Pin 3  

**Servo Motor**
- Signal → Pin 9  
- VCC → 5V  
- GND → GND  

**Buzzer**
- Positive → Pin 6  
- Negative → GND  

## How to Run
1. Clone this repository
2. Open `SmartJemuran.ino` using Arduino IDE
3. Connect the hardware according to the wiring guide
4. Upload the code to Arduino Uno
5. Open Serial Monitor at 9600 baud to observe system behavior

## Demo Video
A demonstration video of the system in operation can be viewed here:  
📽️ **[Demo Video Link]**

## What I Learned
- Sensor integration and calibration
- Embedded decision-making logic
- Actuator control using PWM
- System automation and reliability concepts
- Debugging using Serial communication

## Future Improvements
- Add IoT connectivity for remote notifications
- Implement manual override controls
- Use external power supply for improved stability
- Add data logging features

## About
An automated embedded system project developed as part of a Microprocessor and Microcontroller course.
