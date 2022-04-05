#include "Condition.h"

//bool Condition::Test() { return false; }

HourCondition::HourCondition(int* testValueP, int hourP) :
	testValue{testValueP},
	hour{hourP}{}

bool HourCondition::Test() { return *testValue >= hour; }