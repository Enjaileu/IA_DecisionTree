#include "Character.h"
using std::string;

Character::Character(){}

Character::Character(string nameP, string pathP, float xP, float yP):
	Sprite(pathP, xP, yP),
	name{nameP}{}

void Character::Load() {
	Sprite::Load();
}

void Character::Draw() {
	Sprite::Draw();
}

void Character::Unload() {
	Sprite::Unload();
}
