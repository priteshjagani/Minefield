/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};
//Function to be tested in isSafe()


// Following are the test cases.

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

//Just to test if this is working in incorrect case
TEST(FieldTest, MineInBounds)
{
	Field minefield;
	minefield.placeMine(0,0);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}


TEST(FieldTest, isSafeCase)
{
	Field minefield;
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
