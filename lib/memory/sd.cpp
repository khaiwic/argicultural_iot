#include "sd.h"

void SD_Card_init(){
    //Khoi dong SD Card
    if(!SD.begin(SD_pin::CS_PIN)){
        Serial.println("Failed to open config.json");
        return;
    }
    File configFile = SD.open("/config.json");
    size_t size = configFile.size();
}