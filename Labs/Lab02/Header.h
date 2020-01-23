#pragma once
#ifndef Lab02
#define Lab02

class Foo
{
public:
	Foo();
	Foo(Foo&);

	int writeX();

	~Foo();

private:
	int _x;
};

#endif // !Lab02
