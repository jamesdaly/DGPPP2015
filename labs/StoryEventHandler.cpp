#include "StoryEventHandler.h"
#include <iostream>

StoryEventHandler::StoryEventHandler()
{
	//initialize variables here
}

StoryEventHandler::~StoryEventHandler()
{

}


void StoryEventHandler::getNextStoryPoint()
{

}

void StoryEventHandler::Fight(Character* attacker, Character* defender)
{
	std::cout << "Beginning Attack \n";
	if(attacker->getStrength() >= defender->getDefense()){
		int temphealth = defender->getHealth();
		int damage = attacker->getStrength() - defender->getDefense();
		temphealth = temphealth - damage;
		defender->setHealth(temphealth);
		std::cout << "Attacker hits dealing " << damage << " DAMAGE!! \n";
	}
	else{
		std::cout << "Attacker Misses!! \n";
	}
}

void StoryEventHandler::Choice()
{

}





