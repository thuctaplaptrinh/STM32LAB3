/*
 * global.c
 *
 *  Created on: Oct 15, 2024
 *      Author: Asus
 */
#include "global.h"

enum ModeState MODE;

enum LedToggleState mode2Toggle;
enum SegState mode2Seg;
enum IncreaseDelayState mode2Increase;

enum LedToggleState mode3Toggle;
enum SegState mode3Seg;
enum IncreaseDelayState mode3Increase;

enum LedToggleState mode4Toggle;
enum SegState mode4Seg;
enum IncreaseDelayState mode4Increase;

enum LedState TopToBottomLedAutoState;
enum LedState LeftToRightLedAutoState;
enum SegState seg7AutoState;

int redDelay = 5;
int greenDelay = 3;
int yellowDelay = 2;

int DelayTemp = 0;

int countdownTopToBottomLed;
int countdownLeftToRightLed;

void setValues(void){
	MODE = MODE1;

	mode2Toggle = TOGGLE_INIT;
	mode2Seg = SEG_INIT;
	mode2Increase = INCREASE_INIT;

	mode3Toggle = TOGGLE_INIT;
	mode3Seg = SEG_INIT;
	mode3Increase = INCREASE_INIT;

	mode4Toggle = TOGGLE_INIT;
	mode4Seg = SEG_INIT;
	mode4Increase = INCREASE_INIT;

	TopToBottomLedAutoState = LED_INIT;
	LeftToRightLedAutoState = LED_INIT;
	seg7AutoState = SEG_INIT;

	DelayTemp = 0;
	countdownTopToBottomLed = redDelay;
	countdownLeftToRightLed = greenDelay;
}
