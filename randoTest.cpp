/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WITHIN RANDO CLASS:

	bool isDivisibleBy(int,int);
		
	bool isPalindrome(string);

	unsigned int mostPopularDigit(unsigned int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, sanityCheck)
{
	Rando rando;
	ASSERT_TRUE( true );
}

TEST(RandoTest, mostPopularZero)
{
  Rando rando;
  ASSERT_EQ(rando.mostPopularDigit(0), 0);
}
TEST(RandoTest, mostPopularTwoWayTie)
{
  Rando rando;
  ASSERT_EQ(rando.mostPopularDigit(331311), -1);
}
TEST(RandoTest, mostPopularTenWayTie)
{
  Rando rando;
  ASSERT_EQ(rando.mostPopularDigit(1234567890), -1);
}
TEST(RandoTest, mostPopularNotTie)
{
  Rando rando;
  ASSERT_EQ(rando.mostPopularDigit(31311), 1);
}
TEST(RandoTest, mostPopularAllTwos)
{
  Rando rando;
  ASSERT_EQ(rando.mostPopularDigit(222), 2);
}
TEST(RandoTest, mostPopularOneTie)
{
  Rando rando;
  ASSERT_EQ(rando.mostPopularDigit(64), -1);
}

