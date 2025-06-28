# Fingerprint-Attendance
A beginner IoT project using Arduino/NodeMCU, jumper wires, and R307 sensors. Includes wiring and source code.
# 🔐 Fingerprint Biometric Attendance System using Arduino

This project is a **biometric attendance system** built with **Arduino UNO**, **R307 fingerprint sensor**, **0.96” OLED display**, and an **SD card module**. It allows users to enroll fingerprints and mark attendance, which is logged with timestamps on the SD card. Ideal for basic biometric attendance tracking in schools, offices, and labs.

---

## 📸 Demo

![Demo]https://drive.google.com/file/d/1USk8gYZwMXi_RyGRiKQXjLSZ6HWeV8O4/view?usp=drive_link

---

## 🧰 Components Required

- Arduino UNO
- R307 Fingerprint Sensor
- OLED Display (0.96” I2C)
- SD Card Module + Micro SD Card
- Push Buttons (x2)
- Jumper Wires & Breadboard

---

## 🗂️ Project Features

- Fingerprint Enrollment & Matching
- OLED display for status
- Real-time attendance logging
- Stores data in `attendance_log.txt` on SD card
- Button-controlled actions for Enroll & Mark Attendance

---

## ⚡ Circuit Connections

### 🔹 R307 Fingerprint Sensor to Arduino UNO

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| TX         | D3          |
| RX         | D2          |

### 🔹 OLED Display (I2C)

| OLED Pin | Arduino Pin |
|----------|-------------|
| VCC      | 5V          |
| GND      | GND         |
| SDA      | A4          |
| SCL      | A5          |

### 🔹 SD Card Module

| SD Pin | Arduino Pin |
|--------|-------------|
| VCC    | 5V          |
| GND    | GND         |
| MISO   | D12         |
| MOSI   | D11         |
| SCK    | D13         |
| CS     | D10         |

---

## 📁 Project Structure

Fingerprint-Attendance/
├── Fingerprint_Attendance.ino # Arduino sketch
├── attendance_log.txt # Sample log from SD card
├── /libraries/ # Include required libraries
│ ├── Adafruit_Fingerprint/
│ ├── Adafruit_GFX/
│ ├── Adafruit_SSD1306/
└── README.md

---

## 🔧 Libraries to Install

Make sure to install the following libraries via Arduino Library Manager:

- Adafruit Fingerprint Sensor Library
- Adafruit SSD1306
- Adafruit GFX
- SD

You can also copy the `/libraries` folder manually.

---

## 🚀 How to Run

1. Connect components as per the circuit diagram.
2. Format and insert a micro SD card.
3. Open the `.ino` file in Arduino IDE.
4. Select your board (`Arduino UNO`) and port.
5. Upload the code.
6. Use the Enroll button to register a fingerprint.
7. Use the Attendance button to mark presence.
8. Data will be saved to `attendance_log.txt`.

---

## 📄 Example Log Output

Name: Finger_3
Attendance Marked: 2025-06-28 10:32:45

Name: Finger_1
Attendance Marked: 2025-06-28 10:35:12


---

## 📃 License

This project is open-source under the [MIT License](LICENSE).

---

## 🙌 Acknowledgements
     iqbal,satyam,parul
     
⭐ If you found this project helpful, consider starring ⭐ the repository!
