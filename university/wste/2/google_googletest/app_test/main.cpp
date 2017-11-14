/*
 * main.cpp
 *
 *  Created on: Apr 22, 2017
 *      Author: krwi
 */

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Turtle_test.h"
#include "app/Stage.h"

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;

int main(int argc, char **argv)
{
	cout << "Test" << endl;
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(soneTest,test)
{
	int t = 1;
	EXPECT_EQ(1, t);
}

TEST(PainterTest, CanDrawSomething)
{
	MockTurtle turtle;

	EXPECT_CALL(turtle, Forward(100)).Times(AtLeast(1));
	EXPECT_CALL(turtle, GetX()).Times(AtLeast(1)).WillOnce(Return(1));

	Stage s(turtle);
}

