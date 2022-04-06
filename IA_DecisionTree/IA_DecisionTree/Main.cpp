#include <iostream>
#include "Attack.h"
#include "Boss.h"
#include "StateMachine.h"

int main() {
	int waintingTime = 0;

	Attack attack01{ 1, 70, false, 100 };
	Attack attack02{ 2, 99999, true, 200 };
	Attack attack03{ 3, 50, true, 150 };
	Attack attack04{ 4, 100, false, 50 };
	Attack attack05{ 5, 70, false, 100 };
	Attack attack07{ 7, 100, true, 33 };

	State chooseAttack{};
	State waiting{};
	State goBack{};
	State attack{};

	TrueCondition trueCondition;
	TrueCondition* trueConditionPtr = &trueCondition;

	Transition fromChooseToWait{ &waiting, trueConditionPtr };


	chooseAttack.AddTransition(&fromChooseToWait);

	StateMachine sm{ &chooseAttack };
	StateMachine* smPtr = &sm;

	Boss ella{ "Ella", 1500, smPtr };


 
	return 0;
}