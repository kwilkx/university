/*
 * RTurtle.h
 *
 *  Created on: May 14, 2017
 *      Author: krwi
 */

#ifndef RTURTLE_H_
#define RTURTLE_H_

#include "Turtle.h"
#include <iostream>

class RTurtle: public Turtle
{
public:
	virtual ~RTurtle()
	{
	}
	virtual void PenUp()
	{
		std::cout << __PRETTY_FUNCTION__ << std::endl;
	}
	virtual void PenDown()
	{
		std::cout << __PRETTY_FUNCTION__ << std::endl;
	}
	virtual void Forward(int distance)
	{
		std::cout << __func__ << std::endl;
	}
	virtual void Turn(int degrees)
	{
		std::cout << __func__ << std::endl;
	}
	virtual void GoTo(int x, int y)
	{
		std::cout << __func__ << std::endl;
	}
	virtual int GetX() const
	{
		return 100;
	}
	virtual int GetY() const
	{
		return 0;
	}
};

#endif /* RTURTLE_H_ */
