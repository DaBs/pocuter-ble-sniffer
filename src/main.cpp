#include <Arduino.h>

#include "modules/pocuter/pocuter.hpp"
#include "modules/ble/ble.hpp"
#include "modules/gui/gui.hpp"

static const char* TITLE = "BLE Sniffer";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Starting BLE sniffer application");

  setupPocuter();

  setupGUI(pocuterInstance(), TITLE);

  setupBLE(TITLE);
}

void loop() {
  
}
