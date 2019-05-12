#include <iostream>
#include <random>

int generateNote() {
	std::random_device rd;
	std::mt19937 e2(rd());

	std::uniform_int_distribution<int> dist(4,5);

	return dist(e2);
}


int main(int, char**)
{
	std::cout << "Ocena: " << generateNote() << std::endl;

}

