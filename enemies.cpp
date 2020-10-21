#include "enemies.h"
#include <sstream>

Enemy::Enemy(std::string spriteData, double xPos, double yPos, int scale, int f, Physics* phys, SDL_Renderer* context) {
	this->spriteFile = std::ifstream(spriteData);
	this->context = context;
	this->s = scale;
	this->createSprites();
	this->currFrame = frames[0];
	this->x = xPos;
	this->y = yPos;
	this->index = 0;
	this->flag = f;
	this->physics = phys;
}