/*
 * Stage.cpp
 *
 *  Created on: May 11, 2017
 *      Author: krwi
 */

#include "Stage.h"
#include "Turtle.h"
#include <iostream>

using namespace std;

Stage::Stage(Turtle& turtle)
:mTurtle(turtle)
{
	play();
}

void Stage::play()
{
	mTurtle.Forward(100);
	cout << mTurtle.GetX() << endl;
}

Stage::~Stage()
{
}

