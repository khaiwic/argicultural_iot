#ifndef _HEADER_H_
#define _HEADER_H_

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <BH1750.h>

#include "esp_system.h"
#include "MHZ19.h"

//#include <SensirionI2cSHT3x.h> cam bien do am nhiet do

#include <Wire.h>
#include <Preferences.h>
#include <PubSubClient.h> // giao thuc mqtt
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "freertos/semphr.h"
#include "freertos/stream_buffer.h"
#include "freertos/queue.h"
#include "PMS.h"
#include <string.h>
#include "HardwareSerial.h"
#include <SD.h>
#include <SPI.h>
#include <FS.h>
#include <ArduinoJson.h>
#include <esp_timer.h>
#include <esp_task_wdt.h>

//thu vien tu tao
#include "PinConfig.h"
#include "../lib/implement/led/led.h"
#include "../lib/implement/wind/wind.h"
#include "../lib/sensor/co2_metter/co2_metter.h"
#include "../lib/sensor/Lux/lux_metter.h"
#include "../lib/sensor/pms/pms7003.h"
#include "../lib/sensor/sht30/sht30.h"
#include "../lib/problem/reset/check_reset.h"   
#include "../lib/problem/watch_dog/watchdog.h"
#include "../lib/memory/sd.h"
#include "../lib/server/messenge/messenge.h"
#include "../lib/server/mqtt/mqtt.h"
#include "../lib/server/wifi/wifi.h"

//Wifi
extern String ssid;
extern String password;

//MQTT
extern String id;
extern String mqtt_broker;
extern String mqtt_username;
extern String mqtt_password;
extern int mqtt_port;
extern String topic_pub;
extern String topic_sub;

//sensor and implement
extern String uuid_gateway;
extern String uuid_lux;
extern String uuid_co2;
extern String uuid_pm1;
extern String uuid_pm25;
extern String uuid_pm10;
extern String uuid_temp;
extern String uuid_humid;
extern String uuid_wind_speed;
extern String uuid_wind_direction;
extern String uuid_rain;

//Create key
extern SemaphoreHandle_t xMutex_I2C;

#endif