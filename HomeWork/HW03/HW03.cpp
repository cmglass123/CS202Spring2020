
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <fstream>
using std::ifstream;
#include <sstream>

int main() {
	int new_line = 1;
	int col = 1;
	string token;
	ifstream ifile("Text.txt");
	while (std::getline(ifile, token)) {
		std::istringstream line(token);
		while (line >> token) {
			cout << "line: " << new_line << " " << "collum: " << col << " " << token << std::endl;
			col++;
		}
		if (ifile.unget().get() == '\n') {
			col = 1;
			cout << new_line << " newline" << endl;
			new_line++;
		}
	}

	return 0;
}
