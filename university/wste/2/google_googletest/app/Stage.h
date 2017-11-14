/*
 * Stage.h
 *
 *  Created on: May 11, 2017
 *      Author: krwi
 */

#ifndef STAGE_H_
#define STAGE_H_

#include "RTurtle.h"

class Stage
{
public:
	Stage(Turtle& turtle);
	virtual ~Stage();

	void play();

	Turtle& mTurtle;
};

#endif /* STAGE_H_ */
