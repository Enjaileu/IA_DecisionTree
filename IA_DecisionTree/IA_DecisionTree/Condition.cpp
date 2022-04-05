#include "Condition.h"

HourCondition::HourCondition(int testValueP, int hourP) :
	testValue{testValueP},
	hour{hourP}{}

HourCondition::Test() { return testValue >= hour; }