
//defines the class for the preprocessor
//optional
#ifndef _CLASS_ONE_
#define _CLASS_ONE_

class ClassOne{
//access modifier for methods/variables
public:
//constructor
	ClassOne();
//deconstructor
	~ClassOne();

	//getter
	int getHiddenVariable();
	//setter
	void setHiddenVariable(int hidden);


//access modifier for methods/variables
private:
	int m_hiddenvariable;

};


#endif