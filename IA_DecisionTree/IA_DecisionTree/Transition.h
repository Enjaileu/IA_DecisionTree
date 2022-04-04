#pragma once
#include "State.h"
#include "Condition.h"

class Transition
{
public:
	Transition();
	void GetAction();
	void IsTriggered();
	State GetTargetState();

protected:
	bool triggered{ false };
	Condition condition;
	int action;
	State targetState;
};

