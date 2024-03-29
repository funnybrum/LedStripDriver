#pragma once

#include "NoWiFi.h"
#include "WebServerBase.h"
#include "WebPages.h"

class WebServer: public WebServerBase {
    public:
        WebServer(NetworkSettings* networkSettings, Logger* logger, SystemCheck* systemCheck);
        void registerHandlers();
        void handle_root();
        void handle_get();
        void handle_settings();
        void handle_reset();
        void handle_blink();
};
