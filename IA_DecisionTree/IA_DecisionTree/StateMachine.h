#pragma once
#include "State.h"
class StateMachine
{
public:
	StateMachine(State* currentStateP);
	void Update();
protected:
	State* currentState;
};

