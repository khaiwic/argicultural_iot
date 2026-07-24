#ifndef _LED_H_
#define _LED_H_

#include "header.h"

class Led{
private:
    int _led_red;
    int _led_yellow;
    int _led_green;
public:
    Led(int led_red, int led_yellow,int led_green);
    void Led_init();

    void wait_mqtt();
    void Led_active();
    void Led_Send_Message();
};
#endif