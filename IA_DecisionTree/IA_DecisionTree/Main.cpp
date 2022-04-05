#include <iostream>
#include "Utility.h"
#include "State.h"
#include "Transition.h"
#include "Condition.h"

int main() {
	int hour = 0;

	State wakeUp;
	HourCondition wakeUpCond{ hour, 9 };
	Transition wakeUpTr{ wakeUp, wakeUpCond };
	wakeUp.AddTransition(&wakeUpTr);
 
	return 0;
}