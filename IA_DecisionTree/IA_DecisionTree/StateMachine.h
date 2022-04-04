#pragma once
#include <iostream>
#include <vector>
#include "State.h"
#include "Transition.h"

class StateMachine
{
public:
	StateMachine();
	int Update();

protected:
	State initialState;
	State currentState;
	Transition triggeredTransition;
	std::vector<int> actions;
};

