#include "Attack.h"

Attack::Attack(int nameP, int damageP, bool cancelledP, int waitingTimeP) :
	name{ nameP },
	damage{ damageP },
	cancelled{ cancelledP },
	waitingTime{ waitingTimeP }{}

bool* Attack::IsCancelable() { return &cancelled; }

int Attack::GetName() { return name; }

int Attack::GetDamage() { return damage; }
