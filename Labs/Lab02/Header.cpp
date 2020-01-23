#include "Header.h"
#include <iostream>

Foo::Foo() :_t(2)
{
	
	//std::cout << "This is the Default constructor /n";
}

Foo::Foo(int)
{
	//std::cout << "This is the copy constructor /n";
}

int Foo::writeX()
{
	std::cout << "This is the other constructor /n";
}

Foo::~Foo()
{
	std::cout << "This is the Destructor";
}


