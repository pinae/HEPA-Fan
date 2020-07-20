#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  while(!Serial) {}  // Wait for Serial to start
  Serial.println("Setup complete.");
}

void loop() {
  Serial.println("Loop iteration.");
  delay(1000);
}