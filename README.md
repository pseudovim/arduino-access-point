Basic Access Point Arduino Project
This project creates a simple Wi-Fi Access Point (AP) using an Arduino board and a compatible Wi-Fi module. The Arduino acts as an access point, allowing other devices to connect to it.

Features
Wi-Fi Access Point: The Arduino creates a basic Wi-Fi access point with a custom SSID.
Serial Output: Displays connection status, IP address, and firmware version on the serial monitor.

Prerequisites
1. Hardware
Arduino Board: Any board compatible with the WiFiS3.h library.
Wi-Fi Module: A compatible Wi-Fi module (e.g., ESP8266, ESP32) that supports the WiFiS3.h library.
2. Software
Arduino IDE: Install the latest version of the Arduino IDE.
Wi-Fi Library: Ensure you have the WiFiS3.h library installed in your Arduino IDE. This can be done through the Library Manager.

Installation:
  git clone https://github.com/your-username/arduino-access-point.git
  cd arduino-access-point

Open the Arduino IDE:
  Open the access_point.ino file in the Arduino IDE.
  
Select Your Arduino Board:
  Go to Tools > Board and select your specific Arduino board.
  
Upload the Code:
  Connect your Arduino to your computer via USB.
  Click the Upload button in the Arduino IDE to upload the code to the Arduino board.

Usage:
  Open the Serial Monitor in the Arduino IDE (Tools > Serial Monitor).
  Set the baud rate to 9600 to match the Serial.begin(9600) setting in the code.
  After the Arduino reboots, the Serial Monitor will display information about the access point creation, including the SSID being used.

Connect to the Access Point:
  The Arduino creates a Wi-Fi access point with the SSID SSID.
  You can connect to this access point from any device (e.g., smartphone, laptop) that can detect Wi-Fi networks.
  Once connected, the Serial Monitor will show the IP address assigned to the Arduino.
  
Troubleshooting:
  No Wi-Fi Module Detected:
  Ensure that the Wi-Fi module is properly connected and the correct board is selected in the Arduino IDE.
  Failed to Create Access Point:
  Check the Serial Monitor for any error messages. Ensure the firmware is up to date and the module is compatible with the code.
