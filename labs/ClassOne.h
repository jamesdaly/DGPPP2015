
//defines the class for the preprocessor
//optional
//test class, not used

#ifndef _CLASS_ONE_
#define _CLASS_ONE_

class ClassOne{
//access modifier for methods/variables
public:
//constructor
	ClassOne();
//deconstructor
	~ClassOne();

	//Methods
	//getter
	int getHiddenVariable(); //method with returned variable
	//setter
	void setHiddenVariable(int hidden); //method with passed variable

	

//access modifier for methods/variables
private:
	int m_hiddenvariable;

};


#endif