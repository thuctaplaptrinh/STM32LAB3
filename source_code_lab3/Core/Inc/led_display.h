/*
 * led_display.h
 *
 *  Created on: Oct 13, 2024
 *      Author: Asus
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"
#include "global.h"

void displayTopToBottomLED(enum LedState state_1);
void displayLeftToRightLED(enum LedState state_2);

void toggleLeds(enum LedState state);

void display7SEG_TopToBottom(int num);

void display7SEG_LeftToRight(int num);

void enable0();

void enable1();

void enable2();

void enable3();

void showTimeDelay_First(int first, int second);

void showTimeDelay_Second(int first, int second);


#endif /* INC_LED_DISPLAY_H_ */
