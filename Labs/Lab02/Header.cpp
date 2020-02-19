#include "Header.h"
#include <iostream>

Foo::Foo() :_x(2)
{
	
	//std::cout << "This is the Default constructor /n";
}

Foo::Foo(int _x)
{
	std::cout << "this";
}



int Foo::writeX()
{
	std::cout << "This is the other constructor /n";
}

Foo::~Foo()
{
	std::cout << "This is the Destructor";
}


