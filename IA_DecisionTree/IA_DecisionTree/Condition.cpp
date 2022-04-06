#include "Condition.h"
#include <iostream>
using namespace std;

TrueCondition::TrueCondition(){}

bool TrueCondition::Test() { return true; }

AndCondition::AndCondition(Condition* conditionAp, Condition* conditionBp):
	conditionA{conditionAp},
	conditionB{conditionBp}{}

bool AndCondition::Test() { return conditionA->Test() && conditionB->Test(); }

OrCondition::OrCondition(Condition* conditionAp, Condition* conditionBp) :
	conditionA{ conditionAp },
	conditionB{ conditionBp }{}

bool OrCondition::Test() { return conditionA || conditionB; }