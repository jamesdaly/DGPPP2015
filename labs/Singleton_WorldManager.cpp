#include "Singleton_WorldManager.h"

//static reference to the Worldmanager object, this will be the same object that any other object acceses
static WorldManager *instance = 0;


//write out the functionality of the static function
WorldManager* WorldManager::getInstance()
{
	// if this is the first time we have entered this function 
	// the instance should be equal to 0
	if(instance == 0)
	{
		//create the instance 
		//this constructor is private so cannot be accessed outside this class
		instance = new WorldManager();
		instance->init();
	}

	return instance;
}

