#include <gtest/gtest.h>
#include "impl.h"

TEST(ProductArrayExceptSelfTests, providedExample)
{
    std::vector<int> nums { 1, 2, 3, 4, 5 };
    std::vector<int> expected { 120, 60, 40, 30, 24 };

    EXPECT_EQ(productArrayBruteForce(nums), expected);
    EXPECT_EQ(productArrayOpt1(nums), expected);
    EXPECT_EQ(productArrayOpt2(nums), expected);
}

TEST(ProductArrayExceptSelfTests, providedExample2)
{
    std::vector<int> nums { 3, 2, 1 };
    std::vector<int> expected { 2, 3, 6 };

    EXPECT_EQ(productArrayBruteForce(nums), expected);
    EXPECT_EQ(productArrayOpt1(nums), expected);
    EXPECT_EQ(productArrayOpt2(nums), expected);
}

TEST(ProductArrayExceptSelfTests, twoElements)
{
    std::vector<int> nums { 1, 2 };
    std::vector<int> expected { 2, 1 };

    EXPECT_EQ(productArrayBruteForce(nums), expected);
    EXPECT_EQ(productArrayOpt1(nums), expected);
    EXPECT_EQ(productArrayOpt2(nums), expected);
}

TEST(ProductArrayExceptSelfTests, containsZero)
{
    std::vector<int> nums { 6, 5, 0 };
    std::vector<int> expected { 0, 0, 30 };

    EXPECT_EQ(productArrayBruteForce(nums), expected);
    EXPECT_EQ(productArrayOpt2(nums), expected);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
