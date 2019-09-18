#include "Character.h"


Character::Character(string name, size_t health) 
{
	this->name = name;
	this->health = health;
}
void Character::setName(string name) 
{
	this->name = name;
}
void Character::setHealth(size_t health) 
{
	this->health = health;
}
string Character::getName() 
{
	return name;
}
size_t Character::getHealth() 
{
	return health;
}
void Character::showCharacter() 
{
	cout << "Name: " << name << endl << "Health: " << health << endl;
}
