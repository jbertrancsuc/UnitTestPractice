/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, multiple_letter_pass)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZZZzzzYYYyyy");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, multiple_letter_pass2)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZzZzZzzZZ");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, empty_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}


TEST(PasswordTest, unique_characters)
{
	Password my_password;
	int actual = my_password.unique_characters("Zz");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, unique_characters2)
{
	Password my_password;
	int actual = my_password.unique_characters("zz");
	ASSERT_EQ(0, actual);
}

TEST(PasswordTest, unique_characters3)
{
	Password my_password;
	int actual = my_password.unique_characters("AbC");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, upper_lower)
{
	Password my_password;
	int actual = my_password.has_mixed_case("ZZZZZzZZZ");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, upper_lower2)
{
	Password my_password;
	int actual = my_password.has_mixed_case("ZZZZZZZZ");
	ASSERT_EQ(0, actual);
}


