#include "State.h"
#include "Transition.h"

State::State(){}

void State::AddTransition(Transition* tr) {
	transitions.push_back(tr);
}
