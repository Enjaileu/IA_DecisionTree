#include "Condition.h"

HourCondition::HourCondition(int testValueP, int hourP) :
	testValue{testValueP},
	hour{hourP}{}

bool HourCondition::Test() { return testValue >= hour; }