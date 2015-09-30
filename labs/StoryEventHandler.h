/* This class will handle the following story evends
 * FIGHT: this takes in two characters sets the state of those characters (ALIVE, DEAD) and health
 * CHOICE: this asks the user to choose between two options and sets characters health based on the choice
 * the major method will be getNextStoryPoint() which will give a random story point to the user 
 */
#include "Character.h"

class StoryEventHandler
{
public:
	//constructor
	StoryEventHandler();
	//deconstructor
	~StoryEventHandler();
	
	//calls a random next choice
	void getNextStoryPoint();
	void Fight(Character* attacker, Character* defender);

private:
	//private method fight
	
	//private method choice
	void Choice();

	
	
};
