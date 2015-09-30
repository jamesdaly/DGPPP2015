#include "Character.h"


Character::Character()
{
	health = 0;
	strength = 0;
	defense = 0;
	state = CharacterState::ALIVE;
}


void Character::setHealth(int newhealth)
{
	health = newhealth;

	if(health <= 0)
	{
		state = CharacterState::DEAD;
	}
}