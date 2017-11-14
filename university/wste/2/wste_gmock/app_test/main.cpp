#include <iostream>

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "app/Stage.h"
#include "MockTurtle.h"

using namespace std;
using ::testing::AtLeast;
using ::testing::_;
using ::testing::Gt;
using ::testing::Return;

int main(int argc, char **argv)
{
	cout << "Test" << endl;
	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Turtle, create_scene)
{
//	mTurtle.PenUp();
//	mTurtle.Turn(10);

	MockTurtle mt;
	Stage s(mt);

	EXPECT_CALL(mt, PenUp()).Times(2);

	EXPECT_CALL(mt, Turn(Gt(1)))
	.Times(AtLeast(1));

	EXPECT_CALL(mt, GetX())
	.Times(AtLeast(1))
	.WillOnce(Return(11));

	s.draw();

}
