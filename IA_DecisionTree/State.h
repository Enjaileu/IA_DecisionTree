#pragma once
#include <iostream>
#include <vector>
#include "Transition.h"
#include "Action.h"

class State
{
public:
	State();
	void AddTransition(Transition* transition);
	void Execute();
	int IsTransitionTriggered();
	Transition* GetTransition(int index);
	void SetAction(Action* actionP);

protected:
	std::vector<Transition*> transitions;
	Action* action{ nullptr };
};

