/*
 * main.cpp
 *
 *  Created on: Apr 22, 2017
 *      Author: krwi
 */

#include <iostream>
#include "Turtle.h"
#include "Stage.h"

using namespace std;

class B;

class A
{
	friend class B;

private:
	A()
	{
		cout << __func__ << endl;
	}

	~A()
	{
		cout << __func__ << endl;
	}
};

class B
{
public:
	B()
	{
		A a;
	}
};



int main()
{
	cout << "Regular application" << endl;

	{
		B z;
	}

	return 0;
}

