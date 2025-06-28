#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>

// Set up SoftwareSerial to connect to the fingerprint sensor
SoftwareSerial mySerial(D5, D6);
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

void setup() {
  Serial.begin(9600);
  while (!Serial);  // For native USB
  delay(1000);
  Serial.println("Fingerprint template wipe starting...");

  finger.begin(57600);  // default baud for R307
  if (finger.verifyPassword()) {
    Serial.println("Found fingerprint sensor!");
  } else {
    Serial.println("Did not find fingerprint sensor :(");
    while (1) { delay(1); }
  }

  // Delete fingerprint templates from ID 1 to 127
  for (int id = 1; id <= 127; id++) {
    uint8_t p = finger.deleteModel(id);
    if (p == FINGERPRINT_OK) {
      Serial.print("Deleted template ID #");
      Serial.println(id);
    } else if (p == FINGERPRINT_PACKETRECIEVEERR) {
      Serial.print("Communication error on ID #");
      Serial.println(id);
    } else if (p == FINGERPRINT_BADLOCATION || p == FINGERPRINT_FLASHERR) {
      Serial.print("Template not found or flash error at ID #");
      Serial.println(id);
    }
    delay(100);  // Delay to avoid overwhelming the sensor
  }

  Serial.println("All templates cleared.");
}

void loop() {
  // Do nothing
}
