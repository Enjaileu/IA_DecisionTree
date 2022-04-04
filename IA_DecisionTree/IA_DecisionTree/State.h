#pragma once
#include <iostream>
#include <vector>

class Transition;

class State
{
public:
	State(std::string nameP);
	void GetActions();
	void GetExitAction();
	void GetEntryAction();

protected:
	std::vector<Transition> transitions;
};

