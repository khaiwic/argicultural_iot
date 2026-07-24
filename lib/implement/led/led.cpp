#include "led.h"


Led::Led(int led_red, int led_yellow,int led_green){
    _led_green = led_green;
    _led_red =  led_red;
    _led_yellow = led_yellow;
}

void Led::Led_init(){
    pinMode(_led_green, OUTPUT);
    pinMode(_led_red, OUTPUT);
    pinMode(_led_yellow, OUTPUT);

    digitalWrite(_led_red, HIGH);
    digitalWrite(_led_green, LOW);
    digitalWrite(_led_yellow, LOW);

}

void Led::wait_mqtt(){
    digitalWrite(_led_red, HIGH);
    digitalWrite(_led_green, LOW);
    digitalWrite(_led_yellow, LOW);    
}
void Led::Led_active(){
    digitalWrite(_led_red, LOW);
    digitalWrite(_led_green, LOW);
    digitalWrite(_led_yellow, HIGH);
}

void Led::Led_Send_Message(){
    digitalWrite(_led_red, LOW);
    digitalWrite(_led_green, LOW);
    digitalWrite(_led_yellow, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);

    digitalWrite(_led_red, LOW);
    digitalWrite(_led_green, HIGH);
    digitalWrite(_led_yellow, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);
    
    digitalWrite(_led_red, LOW);
    digitalWrite(_led_green, LOW);
    digitalWrite(_led_yellow, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);

    digitalWrite(_led_red, LOW);
    digitalWrite(_led_green, HIGH);
    digitalWrite(_led_yellow, LOW);
    vTaskDelay(500 / portTICK_PERIOD_MS);
}