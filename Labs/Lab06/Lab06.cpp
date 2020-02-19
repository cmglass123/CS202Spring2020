/*
Lab #6
Namespaces
2/13/2020 
*/

#include <iostream>
#include "names.h"

void Foo()
{
	int x = 7;
	std::cout << x << std::endl;
}

int main()
{
	std::cout << "this is the namespace: ";
	name::Foo();
	std::cout << "this is the function foo not the namespace one: ";
	Foo();
	
	return 0;
}
