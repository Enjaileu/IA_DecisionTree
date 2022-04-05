#pragma once
#include <iostream>
#include <vector>
#include "Transition.h"

class State
{
public:
	State();
	void AddTransition(Transition* transition);

protected:
	std::vector<Transition*> transitions;
};

