#include "Action.h"
#include <cstdlib>
#include <time.h>
using std::vector;

ChooseAttackAction::ChooseAttackAction(vector<Attack*> attacksP, Attack* attackP, int* waintingTimep):
	attacks{attacksP},
	attack{ attackP }{}

void ChooseAttackAction::Execute() {
	srand(time(NULL));
	int randInt = rand() % 100;

	if (randInt <= 11) {
		attack = attacks[0];
	}
	else if (randInt > 11 && randInt <= 13) {
		attack = attacks[1];
	}
	else if (randInt > 13 && randInt <= 38) {
		attack = attacks[2];
	}
	else if (randInt > 38 && randInt <= 63) {
		attack = attacks[3];
	}
	else if (randInt > 63 && randInt <= 79) {
		attack = attacks[4];
	}
	else if (randInt > 79 && randInt <= 99) {
		attack = attacks[5];
	}

	*waitingTime = attack->GetWaitingTime();
}

WaitAction::WaitAction(int* waitingTimeP):
	waitingTime{ waitingTimeP }{}

void WaitAction::Execute() {
	*waitingTime -=1;
}

AttackAction::AttackAction(int* pvP, Attack* attackP):
	pv{pvP},
	attack{attackP}{}

void AttackAction::Execute() {
	*pv -= attack->GetDamage();
}

void DoNothingAction::Execute(){}