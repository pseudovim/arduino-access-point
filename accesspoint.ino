#include "WiFiS3.h"

int status = WL_IDLE_STATUS;

void setup() {
  // Initialize serial and wait for port to open
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // Check for the WiFi module:
  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("Communication with WiFi module failed!");
    while (true); // don't continue
  }

  String fv = WiFi.firmwareVersion();
  if (fv < WIFI_FIRMWARE_LATEST_VERSION) {
    Serial.println("Please upgrade the firmware");
  }

  // Set up the Wi-Fi access point
  Serial.println("Creating access point...");
  startAP(); // Start the access point with SSID "I"
}

void loop() {
  // Keep the AP running continuously
}

void startAP() {
  // SSID Name
  String ssid = "SSID";

  // Print out the SSID being used
  Serial.print("Creating AP with SSID: ");
  Serial.println(ssid);

  // Create the access point with the generated SSID
  status = WiFi.beginAP(ssid.c_str(), "");
  if (status != WL_AP_LISTENING) {
    Serial.println("Creating access point failed");
    while (true); // Don't continue
  }

  // Print out the status
  printWiFiStatus();
}

void printWiFiStatus() {
  // Print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // Print your Wi-Fi shield's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);
}
