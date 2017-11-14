/*
 * Turtle.cpp
 *
 *  Created on: May 11, 2017
 *      Author: krwi
 */

#include "RTurtle.h"
#include <iostream>

using namespace std;

Russian_Turtle::~Russian_Turtle()
{
	cout << __PRETTY_FUNCTION__ << endl;
}
void Russian_Turtle::PenUp()
{
	cout << __PRETTY_FUNCTION__ << endl;
}
void Russian_Turtle::PenDown()
{
	cout << __PRETTY_FUNCTION__ << endl;
}
void Russian_Turtle::Forward(int distance)
{
	cout << __PRETTY_FUNCTION__ << endl;
}
void Russian_Turtle::Turn(int degrees)
{
	cout << __PRETTY_FUNCTION__ << endl;
}
void Russian_Turtle::GoTo(int x, int y)
{
	cout << __PRETTY_FUNCTION__ << x << " " << y << endl;
}
int Russian_Turtle::GetX() const
{
	return 0;
}
int Russian_Turtle::GetY() const
{
	return 0;
}

