#include <gtest/gtest.h>

TEST(TestSuite1, TestWillPass)
{
	ASSERT_TRUE(1);
}

TEST(TestSuite1, TestWillFail)
{
	ASSERT_TRUE(0);
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
}
