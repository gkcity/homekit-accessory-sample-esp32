# Accessory sample (lightbulb) on esp32

本项目源代码由 http://tinyhap.com 生成

## 配置编译环境
1. 下载esp-idf分支:
```
https://github.com/espressif/esp-idf.git
```

2. esp-idf编译环境的配置,请参考官方文档
https://docs.espressif.com/projects/esp-idf/en/stable/get-started/

## 如何编译？
```bash
mkdir build
cd build
make
```

## 如何烧写？ 
```bash
make falsh
```

## 如何调试？
1. 打开串口，观察LOG。
2. 使用iOS里的家庭app绑定并测试此设备。

## 配置代码
```
031-45-154
```

## 板子启动后，将自动连接到路由器
```
ssid: gkct
pasword: hellogkct
```
