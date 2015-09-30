#include "Character.h"


Character::Character()
{
	health = 0;
	strength = 0;
	defense = 0;
	state = CharacterState::ALIVE;
}


//this is a constructor with initialization
Character::Character(int health, int strength, int defense, CharacterState state)
{
	this->health = health;
	this->strength = strength;
	this->defense = defense;
	this->state = state;
}


void Character::setHealth(int newhealth)
{
	health = newhealth;

	if(health <= 0)
	{
		state = CharacterState::DEAD;
	}
}

