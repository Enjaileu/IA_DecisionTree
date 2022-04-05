#include <iostream>
#include "Utility.h"
#include "State.h"
#include "Transition.h"
#include "Condition.h"

int main() {
	int hour = 0;
	int* hourPtr = &hour;

	State wakeUp;
	State sleep;

	HourCondition wakeUpCond{ hourPtr, 9 };
	Transition wakeUpTr{ sleep, &wakeUpCond };
	wakeUp.AddTransition(&wakeUpTr);
 
	return 0;
}