#include <iostream>
#include "GameManager.h"

using namespace std;

//Comp



void main()
{

	//waiting for gamemanager dev
	GameManager* gm = new GameManager();
	while(true)
	{
		//handle input (keystrokes, controller input, mouse input, also check for quit events e.g. someone clicking the red x on the window)
		gm->handleInput();
		//update AI, Physics, World caclulations, player position, collisions
		gm->update();
		//draw call to the drawing engine
		gm->draw();
	}

	
}