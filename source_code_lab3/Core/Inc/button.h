/*
 * button.h
 *
 *  Created on: Oct 30, 2024
 *      Author: Asus
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define BUTTONS_NUMBER 3

void subKeyProcess(int i);
void getKeyInput();
int is_button_pressed( int index);
//unsigned char is_button_pressed_1s(unsigned char index);

#endif /* INC_BUTTON_H_ */
