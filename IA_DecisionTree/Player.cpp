#include "Player.h"
#include <iostream>
using namespace std;

using std::string;

Player::Player(){}

Player::Player(string nameP, int PVp, string pathP, float xP, float yP):
	Character(nameP, pathP, xP, yP),
	pv{PVp},
	wait{ 135 }{}

void Player::Load() {
	Character::Load();
}

void Player::Update(){
	if (wait > 0) {
		wait--;
	}
	else {
		stopGame = true;
	}
}

void Player::Draw() {
	Character::Draw();
	DrawRectangle(300, 300, wait, 10, WHITE);
}

void Player::Unload() {
	Character::Unload();
}

bool Player::GetStopGame() { return stopGame; }

void Player::PlayGame() { 
	stopGame = false;
	wait = 130;
}