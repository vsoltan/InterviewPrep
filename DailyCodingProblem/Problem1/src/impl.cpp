#include "impl.h" 

bool addUpToBruteForce(std::vector<int>& nums, int target)
{
    if (nums.empty())
    {
        return false;
    }

    for (int i = 0; i < nums.size() - 1; ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

bool addUpTo(std::vector<int>& nums, int target)
{
    std::unordered_set<int> nset;
    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
       if (nset.contains(*it))
       {
           return true;
       }
        nset.insert(target - *it);
    }
    return false;
}
