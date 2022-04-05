#include "Transition.h"
#include <string>
#include "State.h"
using std::string;

Transition::Transition():
	targetState{nullptr}{}


Transition::Transition(State& targetStateP):
	targetState{targetState}{}


