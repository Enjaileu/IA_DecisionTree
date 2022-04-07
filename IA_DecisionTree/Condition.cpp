#include "Condition.h"
#include <iostream>
using namespace std;

TrueCondition::TrueCondition() {}

bool TrueCondition::Test() { return true; }

AndCondition::AndCondition(Condition* conditionAp, Condition* conditionBp) :
	conditionA{ conditionAp },
	conditionB{ conditionBp }{}

bool AndCondition::Test() { return conditionA->Test() && conditionB->Test(); }

OrCondition::OrCondition(Condition* conditionAp, Condition* conditionBp) :
	conditionA{ conditionAp },
	conditionB{ conditionBp }{}

bool OrCondition::Test() { return conditionA || conditionB; }

IsTrueCondition::IsTrueCondition(bool* valueP) :
	value{ valueP } {}

bool IsTrueCondition::Test() { return *value == true; }

IsFalseCondition::IsFalseCondition(bool* valueP) :
	value{ valueP } {}

bool IsFalseCondition::Test() { return *value == false; }

IsEqualZeroCondition::IsEqualZeroCondition(int* valueP) :
	value{ valueP } {}

bool IsEqualZeroCondition::Test() { return *value == 0; }