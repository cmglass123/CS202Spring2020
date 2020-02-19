#include "Value.h"
#include <list>
#include <algorithm>
#include <iostream>

Values::Values():it()
{
}

int Values::popFront()
{
	return (it.begin());
}

