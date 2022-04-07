#include "Sprite.h"
#include <string>
#include <iostream>
using namespace std;

Sprite::Sprite() {}

Sprite::Sprite(std::string pathP, float xP, float yP) :
	path{ pathP },
	x{ xP },
	y{ yP }{}

void Sprite::Load() {
	cout << path << endl;
	texture = LoadTexture(path.c_str());
}

void Sprite::Draw() {
	DrawTexture(texture, x, y, WHITE);
}

void Sprite::Unload() {
	UnloadTexture(texture);
}
