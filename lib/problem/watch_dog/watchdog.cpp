#include "watchdog.h"

void Watchdog_init(int timeout_seconds){
    esp_task_wdt_config_t taskwdt = {
        .timeout_ms = timeout_seconds,        /**< TWDT timeout duration in milliseconds */
        .idle_core_mask = 0,    /**< Bitmask of the core whose idle task should be subscribed on initialization where 1 << i means that core i's idle task will be monitored by the TWDT */
        .trigger_panic = true,         /**< Trigger panic when timeout occurs */
    };
    esp_task_wdt_init(&taskwdt);

    esp_task_wdt_add(NULL);
}

// Thêm task vào danh sách giám sát của WDT
void Watchdog_Add_Task(TaskHandle_t taskHandle)
{
    esp_task_wdt_add(taskHandle); // Thêm task vào WDT, nếu taskHandle là NULL thì thêm task hiện tại
}

// Reset WDT để báo hiệu task vẫn đang hoạt động bình thường
void Watchdog_Reset()
{
    esp_task_wdt_reset();
}
