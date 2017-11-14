/*
 * Stage.h
 *
 *  Created on: May 14, 2017
 *      Author: krwi
 */

#ifndef STAGE_H_
#define STAGE_H_

#include "Turtle.h"

class Stage
{
public:
	Stage(Turtle& t);
	virtual ~Stage();

	void draw();

private:
	Turtle& mTurtle;
};

#endif /* STAGE_H_ */
