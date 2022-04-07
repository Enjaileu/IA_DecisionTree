#include "Boss.h"
#include <iostream>
using namespace std;

Boss::Boss() {}

Boss::Boss(string nameP, int PVp, const StateMachine* smP, string pathP, float xP, float yP) :
	Sprite(pathP, xP, yP),
	name{ nameP },
	PV{ PVp },
	sm{ smP }{}

Attack* Boss::GetLoadingAttack() { return loadingAttack; }

bool* Boss::IsInterupted() { return &interupted; }

int* Boss::GetWaintingTime() { return &waitingTime; }

void Boss::UseAttack() {
	cout << name << " use her attack " << loadingAttack->GetName() << " and inflict " << loadingAttack->GetDamage() << " damages!" << endl;
}

void Boss::Load() {
	Sprite::Load();
}

void Boss::Draw() {
	Sprite::Draw();
}

void Boss::Update(){}

void Boss::Unload() {
	Sprite::Unload();
}