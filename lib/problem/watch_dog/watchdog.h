#ifndef _WATCHDOG_TIMER_H_
#define _WATCHDOG_TIMER_H_
#include "header.h"

void Watchdog_init(int timeout_seconds);

void Watchdog_Add_Task(TaskHandle_t taskHandle);

void Watchdog_Reset();

#endif