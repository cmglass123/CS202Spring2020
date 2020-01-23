#pragma once

#include<iostream>
#include<chrono>

#ifndef Lab02
#define Lab02

class Foo
{
public:
	Foo();
	Foo(int);

	int writeX();

	~Foo();

private:
	int _t;
};

#endif // !Lab02
