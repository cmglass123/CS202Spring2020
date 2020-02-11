/*
Lab #5
Binary Files
02/11/20
*/

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ofile("data.dat",std::ios::binary);

	if (ofile)
	{
		ofile.seekg(0, ofile.end);
		int place = ofile.tellg();
		ofile.seekg(0, ofile.beg);



	}

}