#pragma once
#include<string>
#include "Condition.h"

class State;

class Transition
{
public:
	Transition();
	Transition(State* targetStateP, Condition* conditionP);
	bool IsTriggered();
	State* GetTargetState();

protected:
	State* targetState{ nullptr };
	Condition* condition{ nullptr };
};

