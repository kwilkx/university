/*
 * RTurtle.h
 *
 *  Created on: May 11, 2017
 *      Author: krwi
 */

#ifndef R_TURTLE_H_
#define R_TURTLE_H_

#include "Turtle.h"

class Russian_Turtle : public Turtle
{
public:
	virtual ~Russian_Turtle();
	virtual void PenUp();
	virtual void PenDown();
	virtual void Forward(int distance);
	virtual void Turn(int degrees);
	virtual void GoTo(int x, int y);
	virtual int GetX() const;
	virtual int GetY() const;
};

#endif /* TURTLE_H_ */
