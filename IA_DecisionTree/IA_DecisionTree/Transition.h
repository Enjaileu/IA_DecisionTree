#pragma once
#include<string>

class State;

class Transition
{
public:
	Transition();
	Transition(State& targetStateP);

protected:
	State* targetState;
};

