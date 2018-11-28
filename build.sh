#!/bin/sh

export ESP_IDF=/root/esp32/esp-idf
export IDF_PATH=$ESP_IDF
export ESP32_TOOLCHAIN=/root/esp32/xtensa-esp32-elf
export PATH=$ESP32_TOOLCHAIN/bin:$PATH
$ESP_IDF/add_path.sh

mkdir build
cd build
cmake ..
make
