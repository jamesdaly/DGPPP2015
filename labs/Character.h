enum CharacterState { ALIVE, DEAD };


class Character
{
public:
	Character();
	~Character(){}
	//getters
	int getHealth(){ return health;}
	int getStrength(){ return strength;}
	int getDefense(){ return defense;}
	//setters
	void setHealth(int newhealth);
	void setStrength(int newstrength){ strength  = newstrength ;}
	void setDefense(int newdefense){ defense = newdefense;}


	CharacterState state;
private:
	//private variables
	int health;
	int strength;
	int defense;
	
	
};