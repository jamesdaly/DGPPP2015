#include <iostream>
#include <stdlib.h> 
#include "StoryEventHandler.h"


struct zombie{
	int hunger;
	int speed;
	
	void setHunger(int a)
	{
	    hunger = a;
		setSpeed(hunger * 2);
	}
	int getHunger()
	{
		return hunger;
	}
	
	void setSpeed(int b)
	{
		speed = b;
	}
	int getSpeed()
	{
		return speed;
	}

	void print(){
	
		
		switch(hunger){
		case 1:
		case 2:
		std::cout << "belly is full.... it shuffles slowly" << std::endl;
		break;
		case 3:
		case 4: 
		std::cout << "his tummy rumbles.... it meanders threateningly" << std::endl;
		break;
		case 5:
		case 6:
		std::cout << "hunger consumes the zombie.... it breaks into a crazed run" << std::endl;
		break;
		
		case 7:
		case 8:
		std::cout << "ravenous would describe this accurately.... it begins to leap and run awkwardly" << std::endl;
		break;
		default:
			std::cout << "run...." << std::endl;
		}
		
		std::cout << "Speed is " << getSpeed();
	}
		
};


using namespace std;

int main()
{
	
	
	/*zombie ted;
	int randhunger = rand() % 10 + 1;
	ted.setHunger(randhunger);
	//ted.print();

	//give the player some options
	std::cout << "\nThere is a zombie in front of you.... \n" << std::endl;
	ted.print(); 
	std::cout << "\n1. Run \n 2. FIGHT!!!!!!" << std::endl;
	
	int userInput = -1; 
	
	userInput = std::cin.get();
	
	if(userInput == 1)
	{
		if(ted.getHunger() >= 5){
			std::cout << "You feel the flesh being torn from your body. CONGRADULATIONS!" << std::endl;
		}
		else{
			std::cout << "You escape the zombie. He gives you a puppy dog look... awww" << std::endl;
		}

	}
	else
	{
		int randomno = rand() % 10 + 1;
		
		if(3+randomno > ted.getHunger())
		{
			std::cout << "You beat the zombie with the nearest blunt object.... I hope you're happy..."<< std::endl;
			
		}	
		else
		{
			std::cout << "If you can't beat 'em join 'em... You're a zombie HARRY!!!" << std::endl;
		}
	
	}


		
		
		*/
	
	
	Character* playerOne = new Character();
	//here we can use a contstructor with initialization
	Character* playerTwo = new Character(10, 16 , 8, CharacterState::ALIVE);
	playerOne->setHealth(10);
	//playerTwo->setHealth(10);
	playerOne->setStrength(20);
	//playerTwo->setStrength(16);
	playerOne->setDefense(8);
	//playerTwo->setDefense(14);

	StoryEventHandler storyHandler;

	cout << "LETS FIGHT";

	bool swapAttackDefend = false;

	while(playerOne->state == CharacterState::ALIVE && playerTwo->state == CharacterState::ALIVE)
	{

		if(!swapAttackDefend)
		{
			storyHandler.Fight(playerOne, playerTwo);
			swapAttackDefend = true;
		}
		else
		{
			storyHandler.Fight(playerTwo, playerOne);
			swapAttackDefend = false;
		}
		

	}

	if(playerOne->state == CharacterState::DEAD)
	{
		cout << "Player Two wins!!!";
	}
	if(playerTwo->state == CharacterState::DEAD)
	{
		cout << "Player One wins!!!";
	}
	


	
	
	
	
	int wait = std::cin.get();
	
	
}