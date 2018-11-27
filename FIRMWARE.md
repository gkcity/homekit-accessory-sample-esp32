# 固件信息

## 编译后的固件包括3个文件

* bootloader.bin
* partition-table.bin
* homekit-accessory-lightbulb-esp32.bin

## Linux下如何烧写固件？

请先下载esp烧写工具

```
esptool.py
   --chip esp32
   -b 460800 write_flash
   --flash_mode dio
   --flash_size detect
   --flash_freq 40m
   0x1000 bootloader/bootloader.bin
   0x8000 partition_table/partition-table.bin
   0x10000 homekit-accessory-lightbulb-esp32.bin
```

## Windows下如何烧写固件？

```
esptool
    --chip esp32
    -b 460800 write_flash
    --flash_mode dio
    --flash_size detect
    --flash_freq 40m
    0x1000 bootloader/bootloader.bin
    0x8000 partition_table/partition-table.bin
    0x10000 homekit-accessory-lightbulb-esp32.bin
```

## Setup Code 是什么？
{SetupCode}

## 板子启动后，将自动连接到路由器
ssid: gkct
pasword: hellogkct
