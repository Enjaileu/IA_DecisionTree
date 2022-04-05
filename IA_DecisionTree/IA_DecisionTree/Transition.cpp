#include "Transition.h"
#include <string>
#include "State.h"
using std::string;

Transition::Transition():
	targetState{nullptr}{}

Transition::Transition(State& targetStateP, Condition* conditionP) :
	targetState{ targetState },
	condition{conditionP}{}

bool Transition::IsTriggered() { return condition->Test(); }

State* Transition::GetTargetState() { return targetState; }