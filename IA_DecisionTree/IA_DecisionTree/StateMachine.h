#pragma once
#include <iostream>
#include <vector>

struct Condition {
};

struct Action {

};

struct Transition {
	State targetState;
	Condition condition;
	bool triggered;
	Action action;
	//getAction();
	//isTriggered();
	//getTargetState();
};

struct State {
	std::string name;
	std::vector<Transition> transitions;
	Action entryAction;
	Action exitAction;
	//getTransition()
	//getExitAction()
	//getEntryAction()
};

class StateMachine
{
public:
	StateMachine();
	Action Update();

protected:
	State initialState;
	State currentState;
	Transition triggeredTransition;
	std::vector<Action> actions;
};

