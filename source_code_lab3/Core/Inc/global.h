/*
 * global.h
 *
 *  Created on: Oct 15, 2024
 *      Author: Asus
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "button.h"
#include "software_timer.h"

enum ModeState {MODE1 = 1, MODE2 = 2, MODE3 = 3, MODE4 = 4};
enum LedState {LED_INIT, RED, GREEN, YELLOW};
enum LedToggleState {TOGGLE_INIT, TOGGLE};
enum SegState {SEG_INIT, FIRST, SECOND};
enum IncreaseDelayState {INCREASE_INIT, INCREASE};

extern enum ModeState MODE;

extern enum LedToggleState mode2Toggle;
extern enum SegState mode2Seg;
extern enum IncreaseDelayState mode2Increase;

extern enum LedToggleState mode3Toggle;
extern enum SegState mode3Seg;
extern enum IncreaseDelayState mode3Increase;

extern enum LedToggleState mode4Toggle;
extern enum SegState mode4Seg;
extern enum IncreaseDelayState mode4Increase;

extern enum LedState TopToBottomLedAutoState;
extern enum LedState LeftToRightLedAutoState;
extern enum SegState seg7AutoState;

extern int redDelay;
extern int greenDelay;
extern int yellowDelay;

extern int DelayTemp;

extern int countdownTopToBottomLed;
extern int countdownLeftToRightLed;

void setValues(void);

#endif /* INC_GLOBAL_H_ */
