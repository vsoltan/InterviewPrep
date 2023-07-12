#include "impl.h" 

std::vector<int> productArrayBruteForce(std::vector<int>& nums)
{
    std::vector<int> result(nums.size(), 1);
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j < nums.size(); ++j)
        {
            if (i != j)
            {
                result.at(i) *= nums.at(j);
            }
        }
    }
    return result;
}

// this does not work in the case that zero is in the array
std::vector<int> productArrayOpt1(std::vector<int>& nums)
{
    std::vector<int> result(nums.size(), 0);

    int cumulativeProduct = 1;
    for (int i = 0; i < nums.size(); ++i)
    {
        cumulativeProduct *= nums.at(i);
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums.at(i) != 0)
        {
            result.at(i) = cumulativeProduct / nums.at(i);
        }
    }

    return result;
}

// Follow-up: what if you can't use division?
std::vector<int> productArrayOpt2(std::vector<int>& nums)
{
    std::vector<int> result(nums.size(), 0);
    result.at(0) = nums.at(0);

    for (int i = 1; i < nums.size(); ++i)
    {
        // prefix product
        result.at(i) = result.at(i - 1) * nums.at(i);
    }

    int suffixProduct = 1;
    for (int j = nums.size() - 1; j > 0; --j)
    {
        result.at(j) = result.at(j - 1) * suffixProduct;
        suffixProduct *= nums.at(j);
    }
    result.at(0) = suffixProduct;
    return result;
}
