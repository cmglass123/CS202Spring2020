#include "Header.h"
#include<iostream>

Foo::Foo()
{
	std::cout << "made the default constructor ";
}

Foo::Foo(int x):_x(x)
{
	std::cout << "the other constructor ";
}

Foo::Foo(const Foo & p1)
{
	std::cout << "copy the constructor ";
}

int Foo::getx(int x)
{
	return x;
}

Foo::~Foo()
{
	std::cout << "destructor ";
}

