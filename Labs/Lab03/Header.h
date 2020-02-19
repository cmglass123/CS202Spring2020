#pragma once
#include<iostream>

#ifndef Lab03_
#define Lab03_

class Foo
{
public:
	Foo();
	Foo(int x);
	Foo(const Foo & p1);
	int getx(int x);
	~Foo();

private:
	int _x;
};

#endif // !Lab03_
