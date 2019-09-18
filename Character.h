#pragma once
#include<string>
#include<iostream>
using namespace std;

class Character
{

private:
	string name;
	size_t health;


public:
	Character(string, size_t);
	void setName(string);
	void setHealth(size_t);
	string getName();
	size_t getHealth();
	void showCharacter();
};

