#include "Header.h"
#include <iostream>

Foo::Foo()
{
	std::cout << "This is the Default constructor /n";
}

Foo::Foo(Foo&)
{
	std::cout << "This is the copy constructor /n";
}

int Foo::writeX()
{
	std::cout << "This is the other constructor /n";
}

Foo::~Foo()
{
	std::cout << "This is the Destructor";
}


