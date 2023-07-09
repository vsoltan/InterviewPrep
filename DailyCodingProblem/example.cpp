#include <gtest/gtest.h>

int add(int x, int y)
{
    return x + y;
}

TEST(TestSuite, AddTwoNumbers)
{
    EXPECT_EQ(add(5, 6), 11);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
