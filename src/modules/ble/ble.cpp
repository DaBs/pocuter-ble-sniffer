#include <BLEDevice.h>

#include "server/ble_server.hpp"

void setupBLE(const char* title) {
  BLEDevice::init(title);

  setupBLEServer();
}

