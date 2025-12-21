# Automated Clothes Drying System

This repository contains an embedded system project that automatically protects drying clothes by retracting the clothesline when rain is detected or when the environment becomes dark.

## 🌟 Overview
The Automated Clothes Drying System is a microcontroller-based automation project designed to reduce manual monitoring during the clothes drying process. By integrating a rain sensor and a light sensor, the system continuously observes environmental conditions and reacts automatically to protect clothes from unexpected rain or nighttime humidity. This project serves as a practical implementation of embedded systems, sensor-based decision making, and actuator control commonly used in real-world automation systems.

## ✨ Features
1. **Automatic Rain Detection**:Uses an analog rain sensor to detect water presence and trigger protective actions.

2. **Night Condition Detection**: Detects low-light conditions using an LDR sensor as an additional trigger.

3. **Servo-Based Control**: Controls a servo motor to simulate automatic clothesline movement.

4. **Audio Notification**: Activates a buzzer once as a system alert during automatic operation.

5. **Real-Time Monitoring**: Displays sensor values and system status via Serial Monitor for debugging.

## 🛠️ Technologies Used
- Arduino Uno  
- C/C++ (Arduino Language)  
- Rain Sensor (Analog)  
- LDR Light Sensor (Digital Comparator Module)  
- Servo Motor  
- Buzzer  
- Arduino IDE  

## 🚀 How to Run
1. Clone the repository  
   git clone https://github.com/jennjest/smart-clothesline-system.git  
   cd automated-clothes-drying-system  

2. Open the Arduino file  
   Open `SmartJemuran.ino` using Arduino IDE.

3. Set up the hardware  

   **Rain Sensor**  
   VCC → 5V  
   GND → GND  
   AO → A0  

   **Light Sensor (LDR)**  
   VCC → 5V  
   GND → GND  
   D0 → Pin 3  

   **Servo Motor**  
   Signal → Pin 9  
   VCC → 5V  
   GND → GND  

   **Buzzer**  
   Positive → Pin 6  
   Negative → GND  

4. Upload and run  
   Upload the code to Arduino Uno and open the Serial Monitor at 9600 baud.

## 💡 How the System Works
1. The system continuously reads values from the rain and light sensors.  
2. If rain is detected or light intensity drops below a threshold, the servo retracts the clothesline.  
3. A buzzer sounds once to indicate that a protective action has been triggered.  
4. When conditions return to normal, the clothesline is extended again automatically.

## 🎥 Demo Video
A demonstration of the system in action can be viewed here:  
📽️ Demo Video Link

## 📈 What I Learned
- Integrating multiple sensors in an embedded system  
- Implementing decision logic using environmental data  
- Controlling actuators with PWM signals  
- Designing simple automation systems with reliability in mind  
- Debugging hardware and software using Serial communication  

## 🔮 Future Improvements
- Add IoT connectivity for mobile notifications  
- Implement manual override controls  
- Use an external power supply for improved stability  
- Add data logging for environmental analysis  

## 🤝 Contributing
Feel free to fork this repository, open issues, or submit pull requests if you have suggestions for improvements or bug fixes.
