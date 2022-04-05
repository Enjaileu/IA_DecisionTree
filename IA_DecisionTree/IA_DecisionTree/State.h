#pragma once
#include <iostream>
#include <vector>
#include "Transition.h"

class State
{
public:
	State(std::string action);
	void AddTransition(Transition* transition);
	void Execute();
	int IsTransitionTriggered();
	Transition* GetTransition(int index);

protected:
	std::vector<Transition*> transitions;
	std::string action;
};

