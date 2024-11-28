/*
 * button.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Asus
 */

#include "button.h"

// we aim to work with more than one buttons
// timer interrupt duration is 10ms , so to pass 1 second ,
// we need to jump to the interrupt service routine 100 time

// the buffer that the final result is stored after
// debouncing
//static GPIO_PinState buttonBuffer[ BUTTONS_NUMBER ] = {BUTTON_1_Pin, BUTTON_2_Pin, BUTTON_3_Pin};
// we define two buffers for debouncing
int KeyReg0[ BUTTONS_NUMBER ] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg1[ BUTTONS_NUMBER ] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg2[ BUTTONS_NUMBER ] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg3[ BUTTONS_NUMBER ] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
// we define a flag for a button pressed more than 1 second
int button_flag[ BUTTONS_NUMBER ] = {0, 0, 0};
// we define counter for automatically increasing the value
// after the button is pressed more than 1 second .
int counterForButtonPress1s [ BUTTONS_NUMBER ] = {100, 100, 100};
//int counterForButtonPress1s = 100;
//int TimeOutForKeyPress = 100;

void subKeyProcess(int i){
	button_flag[i] = 1;
}

void getKeyInput () {
	for ( int i = 0; i < BUTTONS_NUMBER ; i++) {
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[0] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
		KeyReg0[1] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
		KeyReg0[2] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
		if( KeyReg1[i] == KeyReg0[i] && KeyReg1[i] == KeyReg2[i] ){
			if(KeyReg0[i] != KeyReg3[i]){
				KeyReg3[i] = KeyReg0[i];
				if(KeyReg0[i] == PRESSED_STATE){
					//TODO
					subKeyProcess(i);
					counterForButtonPress1s[i] = 100;
				}
			}
			else {
				counterForButtonPress1s[i]--;
				if(counterForButtonPress1s[i] <= 0){
//					if(KeyReg0[i] == PRESSED_STATE){
//						//TODO
//						subKeyProcess(i);
//					}
//					counterForButtonPress1s[i] = 100;
					KeyReg3[i] = NORMAL_STATE;
				}
			}
		}
	}
}

int is_button_pressed ( int index ) {
	if(button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

//unsigned char is_button_pressed_1s ( unsigned char index ) {
//	if( index >= N0_OF_BUTTONS ) return 0xff ;
//	return ( button_flag[index] == 1) ;
//}
