#!/bin/sh

export ESP_IDF=/opt/esp-idf-tiny
export IDF_PATH=$ESP_IDF
export ESP32_TOOLCHAIN=/opt/xtensa-esp32-elf
export PATH=$ESP32_TOOLCHAIN/bin:$PATH
$ESP_IDF/add_path.sh

mkdir build
cd build
cmake ..
make
