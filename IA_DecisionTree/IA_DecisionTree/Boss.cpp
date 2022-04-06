#include "Boss.h"
#include <iostream>
using std::string;

Boss::Boss(string nameP, int PVp, const StateMachine* smP):
	name{nameP},
	PV{PVp},
	sm{ smP }{}