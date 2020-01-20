/*
Christopher Glass
HW00 Temperature
CS202 Spring 2020
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>



double c_ctof(const char* str)
{
	double x = strtod(str, nullptr);

	return x * (9.0 / 5.0) + 32;
}


int main(int argc, char* argv[])
{

}
