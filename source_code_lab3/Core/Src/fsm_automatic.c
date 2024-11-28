/*
 * fsm_automatic.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Asus
 */

#include "fsm_automatic.h"

void fsm_auto(){
	if(MODE == MODE1){
		switch(TopToBottomLedAutoState){
		case LED_INIT:
			// turn off all led
			TopToBottomLedAutoState = RED;
			setTimer0(100);
			break;
		case RED:
			displayTopToBottomLED(RED);
			if(timer0_flag == 1){
				countdownTopToBottomLed--;
				if(countdownTopToBottomLed <= 0){
					countdownTopToBottomLed = greenDelay;
					TopToBottomLedAutoState = GREEN;
				}
				setTimer0(100);
			}
			break;
		case GREEN:
			displayTopToBottomLED(GREEN);
			if(timer0_flag == 1){
				countdownTopToBottomLed--;
				if(countdownTopToBottomLed <= 0){
					countdownTopToBottomLed = yellowDelay;
					TopToBottomLedAutoState = YELLOW;
				}
				setTimer0(100);
			}
			break;
		case YELLOW:
			displayTopToBottomLED(YELLOW);
			if(timer0_flag == 1){
				countdownTopToBottomLed--;
				if(countdownTopToBottomLed <= 0){
					countdownTopToBottomLed = redDelay;
					TopToBottomLedAutoState = RED;
				}
				setTimer0(100);
			}
			break;
		default:
			break;
		}

		switch(LeftToRightLedAutoState){
		case LED_INIT:
			// turn off all led
			LeftToRightLedAutoState = GREEN;
			setTimer1(100);
			break;
		case RED:
			displayLeftToRightLED(RED);
			if(timer1_flag == 1){
				countdownLeftToRightLed--;
				if(countdownLeftToRightLed <= 0){
					countdownLeftToRightLed = greenDelay;
					LeftToRightLedAutoState = GREEN;
				}
				setTimer1(100);
			}
			break;
		case GREEN:
			displayLeftToRightLED(GREEN);
			if(timer1_flag == 1){
				countdownLeftToRightLed--;
				if(countdownLeftToRightLed <= 0){
					countdownLeftToRightLed = yellowDelay;
					LeftToRightLedAutoState = YELLOW;
				}
				setTimer1(100);
			}
			break;
		case YELLOW:
			displayLeftToRightLED(YELLOW);
			if(timer1_flag == 1){
				countdownLeftToRightLed--;
				if(countdownLeftToRightLed <= 0){
					countdownLeftToRightLed = redDelay;
					LeftToRightLedAutoState = RED;
				}
				setTimer1(100);
			}
			break;
		default:
			break;
		}

		switch(seg7AutoState){
			case SEG_INIT:
				seg7AutoState = FIRST;
				setTimer2(1);
				break;
			case FIRST:
				if(timer2_flag == 1){
					showTimeDelay_First(countdownTopToBottomLed, countdownLeftToRightLed);
					seg7AutoState = SECOND;
					setTimer2(50);
				}
				break;
			case SECOND:
				if(timer2_flag == 1){
					showTimeDelay_Second(countdownTopToBottomLed, countdownLeftToRightLed);
					seg7AutoState = FIRST;
					setTimer2(50);
				}
				break;
			default:
				break;
		}

		if(is_button_pressed(0)){
			MODE = MODE2;
			turnoff_leds();
		}
	}
}
