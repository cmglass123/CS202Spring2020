// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
	std::ofstream files("text.txt",std::ios::app);

	std::ifstream ifiles("text.txt");

	int num;
	std::string text;
	std::string numText;

	if (ifiles)
	{
		std::cout << "enter a number: ";
		std::getline(std::cin, numText);
		std::istringstream uin(numText);
		uin >> num;
		std::cout << "Enter a line of text:";
		std::getline(std::cin, text);

		for (int x = 0; x < num; x++)
		{
			files << text << std::endl;
		}

	}
	else
	{
		std::cout << "Unable to open file try again!\n";
	}
	return 0;

}

