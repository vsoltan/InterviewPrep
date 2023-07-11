#include <gtest/gtest.h>
#include "impl.h"

TEST(addUpToTests, providedExample)
{
    std::vector<int> nums { 10, 15, 3, 7 };
    EXPECT_EQ(addUpToBruteForce(nums, 17), true);
    EXPECT_EQ(addUpTo(nums, 17), true);
}

TEST(addUpToTests, emptyList)
{
    std::vector<int> nums { };
    EXPECT_EQ(addUpToBruteForce(nums, 17), false);
    EXPECT_EQ(addUpTo(nums, 17), false);
}

TEST(addUpToTests, singleElement)
{
    std::vector<int> nums { 1 };
    EXPECT_EQ(addUpToBruteForce(nums, 1), false);
    EXPECT_EQ(addUpTo(nums, 1), false);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
