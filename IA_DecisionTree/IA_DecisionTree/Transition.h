#pragma once
#include<string>
#include "Condition.h"

class State;

class Transition
{
public:
	Transition();
	Transition(State& targetStateP, Condition conditionP);
	bool IsTriggered();

protected:
	State* targetState;
	bool isTriggered{ false };
	Condition condition;
};

