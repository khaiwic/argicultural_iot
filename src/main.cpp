#include <Arduino.h>
#include "header.h"

void task_main(void *pvParameters);

Led  led(Led_pin::red, Led_pin::yellow,Led_pin::green);

void setup(){
  esp_task_wdt_config_t esp_32_task_wdt_init = {
    .timeout_ms = 30000,
    .idle_core_mask = 0,
    .trigger_panic = true
  };

  esp_task_wdt_init(&esp_32_task_wdt_init);
  esp_task_wdt_add(NULL);

  led.Led_init();

  Serial.println(115200);

  SD_Card_init();

  led.wait_mqtt();
  mqtt.Mqtt_int();
}