//test class, not used


#include "ClassOne.h"
#include <iostream>

ClassOne::ClassOne()
{
	std::cout << "This is the contstructor!" << std::endl;
	m_hiddenvariable = 0;
}

ClassOne::~ClassOne()
{
	std::cout << "This is the deconstructor" << std::endl;
	std::cout << "Called when the object is destroyed"<< std::endl;
	
}

int ClassOne::getHiddenVariable()
{
	return m_hiddenvariable;
}

void ClassOne::setHiddenVariable(int hidden)
{
	m_hiddenvariable = hidden;
}

