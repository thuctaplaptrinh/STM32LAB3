/*
 * fsm_automatic.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Asus
 */

#include "fsm_automatic.h"

int countLEDauto = 0;

void updateCountDown(){
	countdownTopToBottomLed--;
	countdownLeftToRightLed--;
}

void fsm_auto(){
	if(MODE == MODE1){
		switch(TopToBottomLedAutoState){
		case LED_INIT:
			TopToBottomLedAutoState = RED;
//			setTimer0(100);
			break;
		case RED:
			displayTopToBottomLED(RED);
//			if(timer0_flag == 1){
//				countdownTopToBottomLed--;
				if(countdownTopToBottomLed <= 0){
					countdownTopToBottomLed = greenDelay;
					TopToBottomLedAutoState = GREEN;
				}
//				setTimer0(100);
//			}
			break;
		case GREEN:
			displayTopToBottomLED(GREEN);
//			if(timer0_flag == 1){
//				countdownTopToBottomLed--;
				if(countdownTopToBottomLed <= 0){
					countdownTopToBottomLed = yellowDelay;
					TopToBottomLedAutoState = YELLOW;
				}
//				setTimer0(100);
//			}
			break;
		case YELLOW:
			displayTopToBottomLED(YELLOW);
//			if(timer0_flag == 1){
//				countdownTopToBottomLed--;
				if(countdownTopToBottomLed <= 0){
					countdownTopToBottomLed = redDelay;
					TopToBottomLedAutoState = RED;
				}
//				setTimer0(100);
//			}
			break;
		default:
			break;
		}

		switch(LeftToRightLedAutoState){
		case LED_INIT:
			LeftToRightLedAutoState = GREEN;
//			setTimer1(100);
			break;
		case RED:
			displayLeftToRightLED(RED);
//			if(timer1_flag == 1){
//				countdownLeftToRightLed--;
				if(countdownLeftToRightLed <= 0){
					countdownLeftToRightLed = greenDelay;
					LeftToRightLedAutoState = GREEN;
				}
//				setTimer1(100);
//			}
			break;
		case GREEN:
			displayLeftToRightLED(GREEN);
//			if(timer1_flag == 1){
//				countdownLeftToRightLed--;
				if(countdownLeftToRightLed <= 0){
					countdownLeftToRightLed = yellowDelay;
					LeftToRightLedAutoState = YELLOW;
				}
//				setTimer1(100);
//			}
			break;
		case YELLOW:
			displayLeftToRightLED(YELLOW);
//			if(timer1_flag == 1){
//				countdownLeftToRightLed--;
				if(countdownLeftToRightLed <= 0){
					countdownLeftToRightLed = redDelay;
					LeftToRightLedAutoState = RED;
				}
//				setTimer1(100);
//			}
			break;
		default:
			break;
		}

		switch(seg7AutoState){
			case SEG_INIT:
				countLEDauto = 0;
				seg7AutoState = FIRST;
//				setTimer2(1);
				break;
			case FIRST:
				countLEDauto++;
				if(countLEDauto == 50){
//				if(timer2_flag == 1){
					showTimeDelay_First(countdownTopToBottomLed, countdownLeftToRightLed);
					seg7AutoState = SECOND;
					countLEDauto = 0;
//					setTimer2(50);
				}
				break;
			case SECOND:
				countLEDauto++;
				if(countLEDauto == 50){
//				if(timer2_flag == 1){
					showTimeDelay_Second(countdownTopToBottomLed, countdownLeftToRightLed);
					seg7AutoState = FIRST;
					countLEDauto = 0;
//					setTimer2(50);
				}
				break;
			default:
				break;
		}

		if(is_button_pressed(0)){
			MODE = MODE2;
//			turnoff_leds();
		}
	}
}
