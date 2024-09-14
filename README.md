# 2019 Robotics Practical Teaching Materials

## Overview

This repository contains practical teaching materials for robotics, designed for 2019 robotics courses. It covers a wide range of topics, from basic Arduino installation to advanced robotics control using web interfaces and computer vision with OpenCV. The teaching materials are divided into 8 chapters, each focused on different key areas of robotics and microcontroller applications.

## Chapters

### Chapter 1: Basic Arduino Installation

**Overview:**

- Introduction to the Arduino platform, its IDE, and basic setup for programming.
- Installing the Arduino IDE on different operating systems (Windows, macOS, Linux).
- Setting up and testing a simple Arduino program with an LED.

**Key Concepts:**

- Installation and Configuration of Arduino IDE.
- Basic circuit setup.
- Writing and uploading code to Arduino boards.

**Required Components:**

- Arduino Uno (or any compatible Arduino board).
- Breadboard.
- LED.
- Resistor (220 ohms).

---

### Chapter 2: NodeMCU Programming

**Overview:**

- Introduction to NodeMCU and ESP8266 for IoT applications.
- Basic NodeMCU setup and programming through the Arduino IDE.
- Writing and uploading code to NodeMCU for basic functionality.

**Key Concepts:**

- Introduction to NodeMCU and ESP8266.
- Writing simple WiFi-enabled applications.
- Handling GPIO pins for input/output.

**Required Components:**

- NodeMCU (ESP8266).
- LEDs and push buttons.

---

### Chapter 3: Usage of ESP8266

**Overview:**

- Deep dive into using ESP8266 for IoT applications.
- Sending and receiving data over the internet.
- Connecting ESP8266 to cloud platforms like ThingSpeak for data logging.

**Key Concepts:**

- WiFi setup and communication.
- HTTP GET and POST requests.
- IoT data logging and visualization.

**Required Components:**

- ESP8266 (Wemos D1 R1 or NodeMCU).
- DHT11 sensor for temperature and humidity monitoring.
- Soil moisture sensor.

---

### Chapter 4: Web Programming for Microcontroller Applications

**Overview:**

- Learning the basics of web programming (HTML, CSS, JavaScript) to interface with microcontrollers.
- Creating a simple web dashboard to monitor sensor data from ESP8266 or Arduino.
- Integrating microcontrollers with web-based control systems.

**Key Concepts:**

- HTML/CSS for UI development.
- JavaScript for client-side programming.
- Sending data from microcontrollers to web pages.

**Required Components:**

- ESP8266 (or any other WiFi-enabled microcontroller).
- Basic web server setup.

---

### Chapter 5: Python and OpenCV Learning

**Overview:**

- Introduction to Python programming for robotics applications.
- Learning OpenCV for image processing and computer vision tasks.
- Writing basic Python scripts to manipulate images and detect objects.

**Key Concepts:**

- Python basics.
- Installing OpenCV and setting up Python environments.
- Basic image processing: reading, writing, and manipulating images.

**Required Tools:**

- Python (version 3.x).
- OpenCV library.

---

### Chapter 6: Robotic Hand Control via Web Interface

**Overview:**

- Building a web interface to control a robotic hand using microcontrollers.
- Using NodeMCU or ESP8266 to interface the robotic hand with the web.
- Learning about web-based robotic control systems.

**Key Concepts:**

- Web-based control systems.
- Interfacing microcontrollers with robotic actuators.
- Designing a web interface for real-time control.

**Required Components:**

- NodeMCU/ESP8266.
- Robotic hand kit.
- Servo motors.

---

### Chapter 7: OpenCV and Face Recognition

**Overview:**

- Introduction to face recognition techniques using OpenCV.
- Using Haarcascade classifiers for face detection.
- Writing Python scripts to detect faces in images or live video streams.

**Key Concepts:**

- Face detection with Haarcascade.
- OpenCV integration with cameras for live detection.
- Real-time face recognition applications.

**Required Tools:**

- Python.
- OpenCV.
- Webcam.

---

### Chapter 8: Face Recognition with Haarcascade

**Overview:**

- Advanced face recognition using OpenCV and Haarcascade.
- Building a complete face recognition system that can detect and recognize faces in real-time.
- Applications in security systems and robotics.

**Key Concepts:**

- Real-time face recognition.
- Haarcascade classifier training.
- Integrating face recognition with microcontrollers for automated tasks.

**Required Tools:**

- Python.
- OpenCV.
- Trained Haarcascade files.

---

## Installation Instructions

1. **Arduino IDE Installation:**

   - Download the Arduino IDE from the official [Arduino website](https://www.arduino.cc/en/software).
   - Install the required libraries for each chapter by navigating to `Sketch > Include Library > Manage Libraries` and installing the relevant libraries (e.g., LiquidCrystal, DHT sensor libraries).

2. **Python and OpenCV Installation:**
   - Install Python from the official [Python website](https://www.python.org/downloads/).
   - Install OpenCV using the following command:

```bash
pip install opencv-python
```

- Ensure all dependencies are correctly installed for face recognition applications.

3. ESP8266 Board Setup:

- Add the ESP8266 board manager URL in the Arduino IDE:
  - Go to File > Preferences and paste the following URL in the "Additional Board Manager URLs" field:

```bash
http://arduino.esp8266.com/stable/package_esp8266com_index.json
```

- Install the board and necessary libraries.

Berikut adalah format dalam bentuk README.md yang dapat langsung Anda salin dan tempel:

markdown

# 2019 Robotics Practical Teaching Materials

## Overview

This repository contains practical teaching materials for robotics, designed for 2019 robotics courses. It covers a wide range of topics, from basic Arduino installation to advanced robotics control using web interfaces and computer vision with OpenCV. The teaching materials are divided into 8 chapters, each focused on different key areas of robotics and microcontroller applications.

## Chapters

### Chapter 1: Basic Arduino Installation

**Overview:**

- Introduction to the Arduino platform, its IDE, and basic setup for programming.
- Installing the Arduino IDE on different operating systems (Windows, macOS, Linux).
- Setting up and testing a simple Arduino program with an LED.

**Key Concepts:**

- Installation and Configuration of Arduino IDE.
- Basic circuit setup.
- Writing and uploading code to Arduino boards.

**Required Components:**

- Arduino Uno (or any compatible Arduino board).
- Breadboard.
- LED.
- Resistor (220 ohms).

---

### Chapter 2: NodeMCU Programming

**Overview:**

- Introduction to NodeMCU and ESP8266 for IoT applications.
- Basic NodeMCU setup and programming through the Arduino IDE.
- Writing and uploading code to NodeMCU for basic functionality.

**Key Concepts:**

- Introduction to NodeMCU and ESP8266.
- Writing simple WiFi-enabled applications.
- Handling GPIO pins for input/output.

**Required Components:**

- NodeMCU (ESP8266).
- LEDs and push buttons.

---

### Chapter 3: Usage of ESP8266

**Overview:**

- Deep dive into using ESP8266 for IoT applications.
- Sending and receiving data over the internet.
- Connecting ESP8266 to cloud platforms like ThingSpeak for data logging.

**Key Concepts:**

- WiFi setup and communication.
- HTTP GET and POST requests.
- IoT data logging and visualization.

**Required Components:**

- ESP8266 (Wemos D1 R1 or NodeMCU).
- DHT11 sensor for temperature and humidity monitoring.
- Soil moisture sensor.

---

### Chapter 4: Web Programming for Microcontroller Applications

**Overview:**

- Learning the basics of web programming (HTML, CSS, JavaScript) to interface with microcontrollers.
- Creating a simple web dashboard to monitor sensor data from ESP8266 or Arduino.
- Integrating microcontrollers with web-based control systems.

**Key Concepts:**

- HTML/CSS for UI development.
- JavaScript for client-side programming.
- Sending data from microcontrollers to web pages.

**Required Components:**

- ESP8266 (or any other WiFi-enabled microcontroller).
- Basic web server setup.

---

### Chapter 5: Python and OpenCV Learning

**Overview:**

- Introduction to Python programming for robotics applications.
- Learning OpenCV for image processing and computer vision tasks.
- Writing basic Python scripts to manipulate images and detect objects.

**Key Concepts:**

- Python basics.
- Installing OpenCV and setting up Python environments.
- Basic image processing: reading, writing, and manipulating images.

**Required Tools:**

- Python (version 3.x).
- OpenCV library.

---

### Chapter 6: Robotic Hand Control via Web Interface

**Overview:**

- Building a web interface to control a robotic hand using microcontrollers.
- Using NodeMCU or ESP8266 to interface the robotic hand with the web.
- Learning about web-based robotic control systems.

**Key Concepts:**

- Web-based control systems.
- Interfacing microcontrollers with robotic actuators.
- Designing a web interface for real-time control.

**Required Components:**

- NodeMCU/ESP8266.
- Robotic hand kit.
- Servo motors.

---

### Chapter 7: OpenCV and Face Recognition

**Overview:**

- Introduction to face recognition techniques using OpenCV.
- Using Haarcascade classifiers for face detection.
- Writing Python scripts to detect faces in images or live video streams.

**Key Concepts:**

- Face detection with Haarcascade.
- OpenCV integration with cameras for live detection.
- Real-time face recognition applications.

**Required Tools:**

- Python.
- OpenCV.
- Webcam.

---

### Chapter 8: Face Recognition with Haarcascade

**Overview:**

- Advanced face recognition using OpenCV and Haarcascade.
- Building a complete face recognition system that can detect and recognize faces in real-time.
- Applications in security systems and robotics.

**Key Concepts:**

- Real-time face recognition.
- Haarcascade classifier training.
- Integrating face recognition with microcontrollers for automated tasks.

**Required Tools:**

- Python.
- OpenCV.
- Trained Haarcascade files.

---

## Installation Instructions

1. **Arduino IDE Installation:**

   - Download the Arduino IDE from the official [Arduino website](https://www.arduino.cc/en/software).
   - Install the required libraries for each chapter by navigating to `Sketch > Include Library > Manage Libraries` and installing the relevant libraries (e.g., LiquidCrystal, DHT sensor libraries).

2. **Python and OpenCV Installation:**

   - Install Python from the official [Python website](https://www.python.org/downloads/).
   - Install OpenCV using the following command:

   ```bash
   pip install opencv-python

    Ensure all dependencies are correctly installed for face recognition applications.

    ESP8266 Board Setup:

        Add the ESP8266 board manager URL in the Arduino IDE:
            Go to File > Preferences and paste the following URL in the "Additional Board Manager URLs" field:

        bash

        http://arduino.esp8266.com/stable/package_esp8266com_index.json

        Install the board and necessary libraries.
   ```

## Conclusion

This repository provides a comprehensive set of teaching materials for robotics, spanning from fundamental microcontroller programming to advanced computer vision techniques. By following the eight chapters, learners will gain practical knowledge and skills in Arduino and NodeMCU programming, web integration, Python with OpenCV, and robotic control. These resources are designed to facilitate hands-on learning and application of key robotics concepts.

## Contributing

Feel free to contribute to this repository by submitting issues or pull requests to improve the materials and make them more comprehensive for future robotics enthusiasts.

## Contact

For any questions or issues regarding this project, please contact veendyputra@gmail.com.
