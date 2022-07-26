#include "triangularSum.hpp"

int triangularSum(vector<int>& nums)
{
    while(nums.size() > 1)
    {
        for(int i = 0; i < nums.size()-1; i++)
            nums[i] = (nums[i] + nums[i+1]) % 10;

        nums.resize(nums.size()-1);
    }

    return nums[0];
}

int triangularSum2(vector<int>& nums)
{
    if(nums.size() == 1)
        return nums[0];

    for(auto it = nums.begin(); it != nums.end(); it++)
    {
        if(it != nums.end()-1)
            *it = (*it + *(it+1)) % 10;
    }
    vector<int> ret;
    ret.assign(nums.begin(),nums.end()-1);

    return triangularSum2(ret);
}
