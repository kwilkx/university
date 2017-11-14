#include <iostream>
#include "Stage.h"
#include "RTurtle.h"

int main()
{
	std::cout << "My app" << std::endl;
	RTurtle t;

	Stage s(t);
	s.draw();
}
