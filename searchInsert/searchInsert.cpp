#include "searchInsert.hpp"

int searchInstert(vector<int>& nums, int target)
{
    int L = 0;
    int R = nums.size()-1;
    int M = (L+R)/2;

    while(L <= R)
    {
        if(nums[M] == target)
            return M;

        if(nums[M] > target)
            R = M-1;
        else
            L = M+1;

        M = (L+R)/2;
    }

    return L;
}
