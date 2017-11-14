#include <iostream>
#include <stdlib.h> 
#include "auto.hpp"
#include <gtest/gtest.h>

using namespace std;

/*
TEST(BMW, CheckConstructor) 
{
	BMW b = BMW("black",100);
	EXPECT_EQ(100, b.getSpeed());
	//ASSERT_DEATH( ::testing::ExitedWithCode(-1), "Error");
	EXPECT_TRUE( string("black234234") == b.getColour() );	
}

TEST(BMW, CheckGo) 
{
	BMW b = BMW("black",100);
	ASSERT_EQ(100, b.getSpeed());
	ASSERT_EQ("black", b.getColour());
}
*/


class BMWF: public testing::Test {
public:
   void SetUp( ) {
	cout << "SetUp" << endl;
   }
 
   void TearDown( ) {
cout << "TearDown" << endl;
   }
};


TEST_F(BMWF, CheckGoF) //BMWF.CheckGoF
{
	BMW b = BMW("black",100);
	ASSERT_EQ(100, b.getSpeed());
	ASSERT_EQ("black", b.getColour());
}

TEST_F(BMWF, CheckGoF1) 
{
	BMW b = BMW("black",100);
	ASSERT_EQ(1030, b.getSpeed());
	ASSERT_EQ("bl3ack", b.getColour());
}

/*
int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
*/
