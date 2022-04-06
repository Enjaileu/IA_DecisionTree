#pragma once

class Attack
{
public:
	Attack(int name, int damage, bool cancelled, int waitingTime);

protected:
	int name;
	int damage;
	bool cancelled;
	int waitingTime;
};

