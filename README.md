# Led Strip Driver

WIP: This is in very early stage. The project is based on common base crated for ESP82xx apps, the hardware is ready and a bug was discovered (missing SDA/SCL pullup resistors).

A driver for LED strips. The PCB is available at EasyEDA - https://easyeda.com/funnybrum/wifi-led-driver.

High frequency PWM driver with high power MOSFET transistors. Further enhanced by a RTC clock. Based on the time a different setting can be applied. Exampels are:
 * Cool light at day, warm light at night.
 * Automatically dim the light output based on the current time.

 Configuration is done on a web page. This is the only reason why ESP8285 is used.

# Building the project

The project uses a common set of tools that are availabe in another repo - https://github.com/funnybrum/esp8266-base. Clone the esp8266-base repo in the lib folder:

```
cd lib
git clone git@github.com:funnybrum/esp8266-base.git
```

After that try building the project. You should hit linking failure stating that the firmware can't fit in the ESP8266 memory. Check the details in the ./lib/README.md to find out how to address that.

