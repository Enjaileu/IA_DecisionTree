#include "StateMachine.h"

StateMachine::StateMachine(State* currentStateP):
	currentState{currentStateP}{}

void StateMachine::Update() {
	int testTrigger = currentState->IsTransitionTriggered();
	if (testTrigger != -1) {
		currentState = currentState->GetTransition(testTrigger)->GetTargetState();
	}
	currentState->Execute();
}