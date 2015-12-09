// this class will be a singleton for holding reference to all game objects


class WorldManager{
public:
	//create a  static function to access this object
	//this will be the same function that is accessed by any other class
	// meaning that there is only one place in memory that this function resides
	static WorldManager* getInstance();
	 void init();
	 
	 //void registerCharacter(Character* c){ mainCharacter = c);


private:
	//private constructor and destructor because we want this class to be responsible for creating and destroying
	WorldManager();
	~WorldManager();
	//store game objects here

	//Character* mainCharacter;
};

