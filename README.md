# Fingerprint-Attendance
A beginner IoT project using Arduino/NodeMCU, jumper wires, and R307 sensors. Includes wiring and source code.
# 🔐 Fingerprint Biometric Attendance System using Arduino

# IoT Biometric Fingerprint Attendance System using ESP8266

This project is an IoT-based **Fingerprint Attendance System** using **NodeMCU ESP8266**, **R307 Fingerprint Sensor**, and **OLED Display**. It allows you to capture attendance data via biometric fingerprint and store it in a **Google Sheet** or **Google Firebase** in real-time through Wi-Fi. Ideal for basic biometric attendance tracking in schools, offices, and labs.

---

## 📸 Demo

![Demo]https://drive.google.com/file/d/1USk8gYZwMXi_RyGRiKQXjLSZ6HWeV8O4/view?usp=drive_link

---
## 🧰 Components Required

| Component | Quantity |
|----------|----------|
| NodeMCU ESP8266 | 1 |
| R307 Fingerprint Sensor | 1 |
| OLED Display (0.96" I2C SSD1306) | 1 |
| Jumper Wires | As needed |
| Breadboard | 1 |
| Power Supply / USB Cable | 1 |

---

## 🚀Project Features

- 📡 Wi-Fi based attendance tracking
- 🔒 Biometric authentication using R307 sensor
- 📊 Real-time data upload to Google Sheets or Firebase
- 📺 0.96" OLED display for live status and feedback
- 💾 Fingerprint enrollment and ID mapping
- 🌐 Web-friendly attendance data tracking
- Downloadable `attendance_log.xlsx` excel file> 

---

## ⚡ Circuit Connections

### 🔹 R307 Fingerprint Sensor to Arduino UNO

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| TX         | D5/D6       |
| RX         | D6/D5       |

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
## 🔧 How It Works

1. The R307 sensor scans and matches fingerprints.
2. If a match is found, the NodeMCU sends data via Wi-Fi.
3. The data is updated to Google Sheets or Firebase.
4. OLED shows the user name and attendance status.


---
## 📂 Folder Structure

```
├── Fingerprint_Attendance.ino
├── README.md
└── libraries/
    ├── Adafruit_Fingerprint
    ├── Adafruit_SSD1306
    └── FirebaseESP8266
```

## 🔧 Libraries to Install

Make sure to install the following libraries via Arduino Library Manager:

- Adafruit Fingerprint Sensor Library
- Adafruit SSD1306
- SSD1306
- ThingESP
- Adafruit GFX  


---
## 🛠️ Setup Instructions

### 1. Clone the Repository

```bash
https://github.com/Saurav0094/Fingerprint-Attendance.git
```

### 2. Arduino IDE Setup

- Install **ESP8266 board package** via Board Manager
- Install required libraries:
  - `Adafruit_GFX`
  - `Adafruit_SSD1306`
  - `Adafruit_Fingerprint`
  - `ESP8266WiFi`
  - `FirebaseESP8266` (if using Firebase)

### 3. Upload the Code

- Open the `.ino` file from the repository
- Enter your **Wi-Fi credentials**
- Enter your **Firebase/Google Sheet API keys** (if applicable)
- Select the correct **board (NodeMCU 1.0)** and COM port
- Upload the code

### 4. Enroll Fingerprints

- The serial monitor will guide you through fingerprint enrollment.
- Each fingerprint is assigned a unique ID.

## 📈 Firebase / Google Sheet Setup/ Web setup
- Start XAMMP.
- start apache and mysql in XAMMP.
- Open any web browser and paste 1st link given in links.txt file.
- Paste 2nd link and it would take u to web page
- Now you are ready to go.


## 🚀 How to Run

1. Connect components as per the circuit diagram.
2. Connect usb to computer port.
3. Download and install XAMMP app.
4. Download biometricattendance folder present in repository.
5. Paste this folder in below given path:-
6. path-> c/xammp/htdocs/paste here.
7. Open the `.ino` file in Arduino IDE.
8. Select your board (`NODE MCU ESP8266`) and port.
9. Upload the code.
10. start xammp-> start apcahe-> start mysql.
11. Open web browser and paste the link given in link file one by one in new TAB.
13. Use the Enroll button to register a fingerprint.
14. Use the Attendance button to mark presence.
15. Data will be saved to `attendance_log.txt`.

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
