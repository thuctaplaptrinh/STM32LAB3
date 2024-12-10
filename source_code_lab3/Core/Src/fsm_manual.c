/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Asus
 */

#include "fsm_manual.h"

void turnoff_leds(){
	HAL_GPIO_WritePin(TB_RED_GPIO_Port, TB_RED_Pin, SET);
	HAL_GPIO_WritePin(TB_YELLOW_GPIO_Port, TB_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(TB_GREEN_GPIO_Port, TB_GREEN_Pin, SET);
	HAL_GPIO_WritePin(LR_RED_GPIO_Port, LR_RED_Pin, SET);
	HAL_GPIO_WritePin(LR_YELLOW_GPIO_Port, LR_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LR_GREEN_GPIO_Port, LR_GREEN_Pin, SET);
}

void check_time_valid(){
	if (redDelay > (yellowDelay + greenDelay)){
		int remainder = redDelay - yellowDelay - greenDelay;
		greenDelay = greenDelay + remainder/2;
		yellowDelay = redDelay - greenDelay;
	}
	else if (redDelay < (yellowDelay + greenDelay)){
		redDelay  = yellowDelay + greenDelay;
	}

	if (yellowDelay > greenDelay){
		int tmp = greenDelay;
		greenDelay = yellowDelay;
		yellowDelay= tmp;
	}
}


void MODE2_run(){
	switch(mode2Toggle){
		case TOGGLE_INIT:
			mode2Toggle = TOGGLE;
//			setTimer3(25);
			break;
		case TOGGLE:
//			if(timer3_flag == 1){
				toggleLeds(RED);
//				setTimer3(25);
//			}
			break;
		default:
			break;
	}

	switch(mode2Increase){
		case INCREASE_INIT:
			DelayTemp = redDelay;
			if (is_button_pressed(1)==1){
				mode2Increase = INCREASE;
				DelayTemp += 1;
			}
			break;
		case INCREASE:
			if (is_button_pressed(1)==1){
				DelayTemp += 1;
				if(DelayTemp >= 99) DelayTemp = 1;
			}
			if (is_button_pressed(2)==1){
				redDelay = DelayTemp;
				DelayTemp = 0;
				MODE = MODE3;
			}
			break;
		default:
			break;
	}

	switch(mode2Seg){
		case SEG_INIT:
			mode2Seg = FIRST;
//			setTimer4(25);
			break;
		case FIRST:
//			if(timer4_flag == 1){
				showTimeDelay_First(1,DelayTemp);
				mode2Seg = SECOND;
//				setTimer4(25);
//			}
			break;
		case SECOND:
//			if(timer4_flag == 1){
				showTimeDelay_Second(0,DelayTemp);
//				setTimer4(25);
				mode2Seg = FIRST;
//			}
			break;
		default:
			break;

	}
}

void MODE3_run(){
	switch(mode3Toggle){
		case TOGGLE_INIT:
			mode3Toggle = TOGGLE;
//			setTimer3(25);
			break;
		case TOGGLE:
//			if(timer3_flag == 1){
				toggleLeds(YELLOW);
//				setTimer3(25);
//			}
			break;
		default:
			break;
	}

	switch(mode3Increase){
		case INCREASE_INIT:
			DelayTemp = yellowDelay;
			if (is_button_pressed(1)==1){
				mode3Increase = INCREASE;
				DelayTemp +=1;
			}
			mode3Increase = INCREASE;
			break;
		case INCREASE:
			if (is_button_pressed(1)==1){
				DelayTemp +=1;
				if(DelayTemp >= 99) DelayTemp = 1;
			}
			if (is_button_pressed(2)==1){
				yellowDelay = DelayTemp;
				DelayTemp = 0;
				MODE = MODE4;
			}
			break;
		default:
			break;
		}

	switch(mode3Seg){
		case SEG_INIT:
			mode3Seg = FIRST;
//			setTimer4(25);
			break;
		case FIRST:
//			if(timer4_flag == 1){
				showTimeDelay_First(1,DelayTemp);
				mode3Seg = SECOND;
//				setTimer4(25);
//			}
			break;
		case SECOND:
//			if(timer4_flag == 1){
				showTimeDelay_Second(0,DelayTemp);
//				setTimer4(25);
				mode3Seg = FIRST;
//			}
			break;
		default:
			break;
	}
}
void MODE4_run(){
	switch(mode4Toggle){
		case TOGGLE_INIT:
			mode4Toggle = TOGGLE;
//			setTimer3(25);
			break;
		case TOGGLE:
//			if(timer3_flag == 1){
				toggleLeds(GREEN);
//				setTimer3(25);
//			}
			break;
		default:
			break;
	}

	switch(mode4Increase){
		case INCREASE_INIT:
			DelayTemp = greenDelay;
			if (is_button_pressed(1)==1){
				mode4Increase = INCREASE;
				DelayTemp +=1;
			}
			break;
		case INCREASE:
			if (is_button_pressed(1)==1){
				DelayTemp +=1;
				if(DelayTemp >= 99) DelayTemp = 1;
			}
			if (is_button_pressed(2)==1){
				greenDelay = DelayTemp;
				check_time_valid();
				MODE = MODE1;
				setValues();
			}
			break;
		default:
			break;
	}

	switch(mode4Seg){
		case SEG_INIT:
			mode4Seg = FIRST;
//			setTimer4(25);
			break;
		case FIRST:
//			if(timer4_flag == 1){
				showTimeDelay_First(1,DelayTemp);
				mode4Seg = SECOND;
//				setTimer4(25);
//			}
			break;
		case SECOND:
//			if(timer4_flag == 1){
				showTimeDelay_Second(0,DelayTemp);
//				setTimer4(25);
				mode4Seg = FIRST;
//			}
			break;
		default:
			break;
	}
}

void fsm_manual(){
	switch(MODE){
	case MODE2:
		MODE2_run();
		if (is_button_pressed(0) == 1){
			MODE = MODE3;
		}
		break;
	case MODE3:
		MODE3_run();
		if (is_button_pressed(0) == 1){
			MODE = MODE4;
		}
		break;
	case MODE4:
		MODE4_run();
		if(is_button_pressed(0)){
			MODE = MODE1;
			check_time_valid();
			setValues();
		}
		break;
	default:
		break;
	}
}

