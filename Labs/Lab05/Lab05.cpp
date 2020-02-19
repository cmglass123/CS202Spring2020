/*
Lab #5
Binary Files
02/11/20
*/

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ofile("data.dat", std::ios::binary);

	if (ofile)
	{
		//ofile.seekg(0, ofile.end);
		//int place = ofile.tellg();
		//ofile.seekg(0, ofile.beg);

		
		int sum = 0;
		int num = 0;
		int average;

		int x;

		while (true)
		{
			
			ofile.read(reinterpret_cast<char*>(&x), sizeof(int));
			sum += x;
			num++;

			if (!ofile)
				break;
		}


		average = double(double(sum) / num);

		std::cout << sum << std::endl;
		std::cout << num << std::endl;
		std::cout << average << std::endl;
	}
	return 0;
}