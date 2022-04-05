#include <iostream>
#include "Utility.h"
#include "State.h"
#include "Transition.h"

int main() {

	State wakeUp;
	Transition wakeUpTr{ wakeUp };
	wakeUp.AddTransition(&wakeUpTr);
 
	return 0;
}