#include "State.h"
#include "Transition.h"
#include <iostream>
using namespace std;

State::State(const std::string actionP) :
	action{actionP}{}

void State::AddTransition(Transition* tr) {
	transitions.push_back(tr);
}

void State::Execute() {
	cout << action << endl;
}

int State::IsTransitionTriggered() {
	for (int i = 0; i < transitions.size(); i++) {
		if (transitions[i]->IsTriggered()) {
			return i;
		}
	}
	return -1;
}

Transition* State::GetTransition(int index) {return transitions[index];}