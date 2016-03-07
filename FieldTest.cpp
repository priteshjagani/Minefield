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


//To check if the player moves out of the boundary condition
TEST(FieldTest, isSafeBoundaryCondition)
{
	Field minefield;
    ASSERT_FALSE(minefield.isSafe(100,5));
}
//To check if the player is inside the board
TEST(FieldTest, isSafeInsideMap)
{
	Field minefield;
	ASSERT_TRUE(minefield.isSafe(4,5));
}
