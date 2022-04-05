#include "Condition.h"
#include <iostream>
using namespace std;

//bool Condition::Test() { return false; }

HourCondition::HourCondition(int* testValueP, int hourP) :
	testValue{testValueP},
	hour{hourP}{}

bool HourCondition::Test() { 
	cout << *testValue << endl;
	cout << hour << endl;
	return *testValue >= hour; }