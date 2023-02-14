#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

#define SERIAL_SERVICE_UUID             "90ab9c9d-21bf-4e5f-941a-b5e9595749a0"
#define SERIAL_TX_CHARACTERISTIC_UUID   "d7092bb7-5fe4-49d0-81ff-ba0d80ae8636"
#define SERIAL_RX_CHARACTERISTIC_UUID   "2c723f5b-77c3-437a-8094-96af62c0f0c6"

void setupBLEServer() {
  BLEServer *pServer = BLEDevice::createServer();

  BLEService *pService = pServer->createService(SERIAL_SERVICE_UUID);

  BLECharacteristic *pTXCharacteristic = pService->createCharacteristic(SERIAL_TX_CHARACTERISTIC_UUID, BLECharacteristic::PROPERTY_NOTIFY | BLECharacteristic::PROPERTY_READ);
  BLECharacteristic *pRXCharacteristic = pService->createCharacteristic(SERIAL_RX_CHARACTERISTIC_UUID, BLECharacteristic::PROPERTY_WRITE_NR);

  pService->start();

  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->addServiceUUID(SERIAL_SERVICE_UUID);
  pAdvertising->setScanResponse(true);
  pAdvertising->setMinPreferred(0x06);  // functions that help with iPhone connections issue
  pAdvertising->setMinPreferred(0x12);
  BLEDevice::startAdvertising();
}