#include "Attack.h"

Attack::Attack(int nameP, int damageP, bool cancelledP, int waitingTimeP):
	name{nameP},
	damage{damageP},
	cancelled{cancelledP},
	waitingTime{waitingTimeP}{}

bool* Attack::IsConcellable() { return &cancelled; }
