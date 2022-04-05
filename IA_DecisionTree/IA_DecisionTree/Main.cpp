#include <iostream>
#include "Utility.h"
#include "State.h"
#include "Transition.h"
#include "Condition.h"
#include "StateMachine.h"

int main() {

	int hour = 0;
	int* hourPtr = &hour;
	//definition state machine

	State wakeUp{ "Il dortw." };
	State sleep{ "Il dort." };

	HourCondition wakeUpCond{ hourPtr, 22 };
	Transition wakeUpTr{ sleep, &wakeUpCond };
	wakeUp.AddTransition(&wakeUpTr);

	HourCondition sleepCond{ hourPtr, 9 };
	Transition sleepTr{ wakeUp, &sleepCond };
	sleep.AddTransition(&sleepTr);

	State* statePtr = &sleep;
	StateMachine sm{ statePtr };

	// test
	Utility::DisplayHour(hour);
	hour += 10;
	Utility::DisplayHour(hour);
	sm.Update();
 
	return 0;
}