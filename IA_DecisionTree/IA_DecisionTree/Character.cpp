#include "Character.h"
#include <iostream>
using std::string;

Character::Character(string nameP, int PVp, int PMp) :
	name{nameP},
	PV{PVp},
	PM{PMp}{}