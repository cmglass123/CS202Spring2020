#pragma once
#ifndef Value_HPP
#define Value_HPP

#include <iostream>
#include <list>

struct Values
{
	std::list <int>::iterator it;

	Values();

	int popFront();
	int popBack();

	void pushFront(int x);
	void pushBack(int x);

	int search(int x);
	int get(int x);

	void print();

};

#endif // !Value_HPP
