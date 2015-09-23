#include <iostream>
#include "ClassOne.h"

using namespace std;

void main()
{

	//instantiate a local copy of the object
	ClassOne c1;

	//create a pointer to the object
	ClassOne* c2 = new ClassOne();

	cout << "Class One Created, hidden variable currently equals:  " << c1.getHiddenVariable() << endl;

	c1.setHiddenVariable(10);

	cout << "Class One setter called, now equal to : " << c1.getHiddenVariable() << endl;

	delete c2;

	std::cin.get();

	


}