/*
Christopher M. Glass
CS202 Spring 2020
1/21/20
Lab #1
*/

#include <iostream>

void foo()
{

}

int main()
{
	int x;
	std::cout << "How many suits do you want: ";
	std::cin >> x;

	do 
	{
		switch (x)
		{
		case 1:
			std::cout << "thanks for buying " << x << "suits";
		case 2:
			std::cout << "thanks for buying " << x << "suits";
		default:
			break;
		}
	} while (x != ' ');

	if(x)
}
