#pragma once

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h>
#include <ESP8266mDNS.h>

#include "user_interface.h"

#include "esp8266-base.h"

#define HTTP_PORT 80
#define HOSTNAME "no-wifi"

struct SettingsData {
    NetworkSettings network;
};

extern Logger logger;
extern Settings settings;
extern SettingsData settingsData;
extern WiFiManager wifi;
extern SystemCheck systemCheck;
