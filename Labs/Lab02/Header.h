#pragma once

#include<iostream>

#ifndef Lab02
#define Lab02

class Foo
{
public:
	Foo();
	Foo(int _x);

	int writeX();

	~Foo();

private:
	int _x;
};

#endif // !Lab02
