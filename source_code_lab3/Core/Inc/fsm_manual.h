/*
 * fsm_manual.h
 *
 *  Created on: Oct 30, 2024
 *      Author: Asus
 */

#ifndef INC_FSM_MANUAL_H_
#define INC_FSM_MANUAL_H_

#include "main.h"
#include "global.h"
#include "led_display.h"
#include "button.h"
#include "software_timer.h"

void turnoff_leds();
void check_time_valid();
void MODE2_run();
void MODE3_run();
void MODE4_run();
void fsm_manual();

#endif /* INC_FSM_MANUAL_H_ */
