cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_TOOLCHAIN_FILE cmake/Arduino-toolchain.cmake)

project(BLE_Sniffer C CXX)

set(ARDUINO_DEFAULT_BOARD esp32:esp32:pocuterone) # Default Board ID
set(ARDUINO_DEFAULT_PORT COM3) # Default Port

add_executable(pocuter_ble_sniffer src/pocuter_ble_sniffer.cpp)

target_link_arduino_libraries(pocuter_ble_sniffer PRIVATE Pocuter core)