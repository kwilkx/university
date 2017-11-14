/*
 * Stage.cpp
 *
 *  Created on: May 14, 2017
 *      Author: krwi
 */

#include "Stage.h"
#include <iostream>

Stage::Stage(Turtle& t) :
		mTurtle(t)
{
}

void Stage::draw()
{
	mTurtle.PenUp();
	mTurtle.Turn(10);

	int i = mTurtle.GetX();
	std::cout << i << std::endl;
	if ( i > 10 )
	{
		mTurtle.PenUp();
	}
}

Stage::~Stage()
{
}

