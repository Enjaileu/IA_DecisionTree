#include "Boss.h"
#include <iostream>
using std::string;

Boss::Boss(){}

Boss::Boss(string nameP, int PVp, const StateMachine* smP):
	name{nameP},
	PV{PVp},
	sm{ smP }{}

Attack* Boss::GetLoadingAttack() { return loadingAttack; }

bool* Boss::IsInterupted() { return &interupted ; }