#include <iostream>
#include <array>
#include <vector>
#include "auto.hpp"

using namespace std;

int main ()
{
	std::vector<car> myvector;

	myvector.push_back(BMW("red",100));
	myvector.push_back(VW("blue",90));
	myvector.push_back(AUDI("green",110));

	for (auto a : myvector)
	{
		a.go();	
	}

	cout << endl;

	return 0;
}
