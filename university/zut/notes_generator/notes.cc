#include <iostream>
#include <random>
#include <fstream>
#include <string>

int generateNote() {
	std::random_device rd;
	std::mt19937 e2(rd());

	std::uniform_int_distribution<int> dist(4,5);

	return dist(e2);
}


int main(int, char**)
{
	std::ifstream file;
	std::string name;

	file.open("names.txt");

	while(file >> name) {
		if(name == "magda"){
			std::cout << "Magda: 5" << std::endl;
		} else {
			std::cout << name << ": " << generateNote() << std::endl;
		}	
	}
}

