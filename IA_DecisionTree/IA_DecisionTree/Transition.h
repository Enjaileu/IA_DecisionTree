#pragma once
#include<string>

class State;

class Transition
{
public:
	Transition();
	Transition(State& targetStateP);
	bool IsTriggered();

protected:
	State* targetState;
	bool isTriggered{ false };
};

