#ifndef _SD_CARD_H_
#define _SD_CARD_H_

#include "header.h"

#define CS_PIN 5 // Chân CS của thẻ SD

void SD_Card_Init(); //get info wifi, mqtt, uuid from sd card
void SD_Card_Write_Reason_Reset(); // wite reset reason, time reset (need wifi) to sd card

#endif