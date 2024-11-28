/*
 * led_display.c
 *
 *  Created on: Oct 13, 2024
 *      Author: Asus
 */

#include "led_display.h"

void display7SEG_TopToBottom(int num){
	switch(num){
	    case 0:
	        HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_SET) ;
	        break;

	    case 1:
	        HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_SET) ;
	        break;

	    case 2:
	        HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_RESET) ;
	        break;

	    case 3:
	        HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_RESET) ;
	        break;

	    case 4:
	        HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_RESET) ;
	        break;
	    case 5:
	        HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_RESET) ;
	        break;
	    case 6:
		    HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
		    HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_SET) ;
		    HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_RESET) ;
			break;
	    case 7:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_SET) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_SET) ;
			break;
	    case 8:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_RESET) ;
			break;
	    case 9:
	    	HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin ,GPIO_PIN_SET) ;
	    	HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin ,GPIO_PIN_RESET) ;
	    	break;
	    default:
	    	break;
	 }
}

void display7SEG_LeftToRight(int num){
	switch(num){
	    case 0:
	        HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_SET) ;
	        break;
	    case 1:
	        HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_SET) ;
	        break;
	    case 2:
	        HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_RESET) ;
	        break;
	    case 3:
	        HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_RESET) ;
	        break;
	    case 4:
	        HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_RESET) ;
	        break;
	    case 5:
	        HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_SET) ;
	        HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_RESET) ;
	        HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_RESET) ;
	        break;
	    case 6:
		    HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
		    HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_SET) ;
		    HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
		    HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_RESET) ;
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_RESET) ;
			break;
	    case 7:
	    	HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_SET) ;
	    	HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_SET) ;
	    	HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_SET) ;
	    	HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_SET) ;
	    	break;
	    case 8:
	    	HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_RESET) ;
	    	break;
	    case 9:
	    	HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin ,GPIO_PIN_SET) ;
	    	HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin ,GPIO_PIN_RESET) ;
	    	HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin ,GPIO_PIN_RESET) ;
			break;
	    default:
	    	break;
	}
}

void displayTopToBottomLED(enum LedState state_1){
	switch(state_1){
		case LED_INIT:
			 HAL_GPIO_WritePin( TB_GREEN_GPIO_Port , TB_GREEN_Pin , GPIO_PIN_SET) ;
			 HAL_GPIO_WritePin( TB_YELLOW_GPIO_Port , TB_YELLOW_Pin , GPIO_PIN_SET ) ;
			 HAL_GPIO_WritePin( TB_RED_GPIO_Port , TB_RED_Pin , GPIO_PIN_SET ) ;
			 break;
		case RED:
			 HAL_GPIO_WritePin( TB_GREEN_GPIO_Port , TB_GREEN_Pin , GPIO_PIN_SET) ;
			 HAL_GPIO_WritePin( TB_YELLOW_GPIO_Port , TB_YELLOW_Pin , GPIO_PIN_SET ) ;
			 HAL_GPIO_WritePin( TB_RED_GPIO_Port , TB_RED_Pin , GPIO_PIN_RESET ) ;
			 break;
		case YELLOW:
			 HAL_GPIO_WritePin( TB_GREEN_GPIO_Port , TB_GREEN_Pin , GPIO_PIN_SET) ;
			 HAL_GPIO_WritePin( TB_YELLOW_GPIO_Port , TB_YELLOW_Pin , GPIO_PIN_RESET ) ;
			 HAL_GPIO_WritePin( TB_RED_GPIO_Port , TB_RED_Pin , GPIO_PIN_SET ) ;
			 break;
		case GREEN:
			 HAL_GPIO_WritePin( TB_GREEN_GPIO_Port , TB_GREEN_Pin , GPIO_PIN_RESET) ;
			 HAL_GPIO_WritePin( TB_YELLOW_GPIO_Port , TB_YELLOW_Pin , GPIO_PIN_SET ) ;
			 HAL_GPIO_WritePin( TB_RED_GPIO_Port , TB_RED_Pin , GPIO_PIN_SET ) ;
			 break;
		default:
			 break;
	}
}

void displayLeftToRightLED(enum LedState state_2){
	switch(state_2){
		case LED_INIT:
			 HAL_GPIO_WritePin( LR_GREEN_GPIO_Port , LR_GREEN_Pin , GPIO_PIN_SET) ;
			 HAL_GPIO_WritePin( LR_YELLOW_GPIO_Port , LR_YELLOW_Pin , GPIO_PIN_SET ) ;
			 HAL_GPIO_WritePin( LR_RED_GPIO_Port , LR_RED_Pin , GPIO_PIN_SET ) ;
			 break;
		case RED:
			 HAL_GPIO_WritePin( LR_GREEN_GPIO_Port , LR_GREEN_Pin , GPIO_PIN_SET) ;
			 HAL_GPIO_WritePin( LR_YELLOW_GPIO_Port , LR_YELLOW_Pin , GPIO_PIN_SET ) ;
			 HAL_GPIO_WritePin( LR_RED_GPIO_Port , LR_RED_Pin , GPIO_PIN_RESET ) ;
			 break;
		case YELLOW:
			 HAL_GPIO_WritePin( LR_GREEN_GPIO_Port , LR_GREEN_Pin , GPIO_PIN_SET) ;
			 HAL_GPIO_WritePin( LR_YELLOW_GPIO_Port , LR_YELLOW_Pin , GPIO_PIN_RESET ) ;
			 HAL_GPIO_WritePin( LR_RED_GPIO_Port , LR_RED_Pin , GPIO_PIN_SET ) ;
			 break;
		case GREEN:
			 HAL_GPIO_WritePin( LR_GREEN_GPIO_Port , LR_GREEN_Pin , GPIO_PIN_RESET) ;
			 HAL_GPIO_WritePin( LR_YELLOW_GPIO_Port , LR_YELLOW_Pin , GPIO_PIN_SET ) ;
			 HAL_GPIO_WritePin( LR_RED_GPIO_Port , LR_RED_Pin , GPIO_PIN_SET ) ;
			 break;
		default:
			 break;
	}
}

void toggleLeds(enum LedState state){
	switch(state){
	case GREEN:
		HAL_GPIO_WritePin(TB_RED_GPIO_Port, TB_RED_Pin, SET);
		HAL_GPIO_WritePin(TB_YELLOW_GPIO_Port, TB_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LR_RED_GPIO_Port, LR_RED_Pin, SET);
		HAL_GPIO_WritePin(LR_YELLOW_GPIO_Port, LR_YELLOW_Pin, SET);
		HAL_GPIO_TogglePin( TB_GREEN_GPIO_Port , TB_GREEN_Pin) ;
		HAL_GPIO_TogglePin( LR_GREEN_GPIO_Port , LR_GREEN_Pin) ;
		break;
	case YELLOW:
		HAL_GPIO_WritePin(TB_RED_GPIO_Port, TB_RED_Pin, SET);
		HAL_GPIO_WritePin(TB_GREEN_GPIO_Port, TB_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LR_RED_GPIO_Port, LR_RED_Pin, SET);
		HAL_GPIO_WritePin(LR_GREEN_GPIO_Port, LR_GREEN_Pin, SET);
		HAL_GPIO_TogglePin( TB_YELLOW_GPIO_Port , TB_YELLOW_Pin) ;
		HAL_GPIO_TogglePin( LR_YELLOW_GPIO_Port , LR_YELLOW_Pin) ;
		break;
	case RED:
		HAL_GPIO_WritePin(TB_YELLOW_GPIO_Port, TB_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(TB_GREEN_GPIO_Port, TB_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LR_YELLOW_GPIO_Port, LR_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LR_GREEN_GPIO_Port, LR_GREEN_Pin, SET);
		HAL_GPIO_TogglePin( TB_RED_GPIO_Port , TB_RED_Pin) ;
		HAL_GPIO_TogglePin( LR_RED_GPIO_Port , LR_RED_Pin) ;
		break;
	default:
		break;
	}
}

void enable0(){
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
}

void enable1(){
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
}

void enable2(){
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}

void enable3(){
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
}

void showTimeDelay_First(int first, int second){
	enable0();
	display7SEG_TopToBottom(first/10);
	enable2();
	display7SEG_LeftToRight(second/10);
}

void showTimeDelay_Second(int first, int second){
	enable1();
	display7SEG_TopToBottom(first%10);
	enable3();
	display7SEG_LeftToRight(second%10);
}
