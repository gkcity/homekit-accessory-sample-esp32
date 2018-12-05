#!/bin/sh

export ESP_IDF=/opt/esp-idf
export IDF_PATH=$ESP_IDF
export ESP32_TOOLCHAIN=/opt/xtensa-esp32-elf
export PATH=$ESP32_TOOLCHAIN/bin:$PATH
sh $ESP_IDF/add_path.sh

git submodule update --init
mkdir build
cd build
cmake ..
make
