#include "searchRange.hpp"

vector<int> searchRange(vector<int>& nums, int target)
{
    vector<int> ret = {binSearch(nums,target,true),binSearch(nums,target,false)};

    return ret;
}

int binSearch(vector<int>& nums, int target, bool leftBias)
{
    int L = 0;
    int R = nums.size()-1;
    int M;
    int i = -1;

    while(L <= R)
    {
        M = (L+R)/2;

        if(target > nums[M])
            L = M+1;
        else if(target < nums[M])
            R = M-1;
        else
        {
            i = M;
            if(leftBias)
                R = M-1;
            else
                L = M+1;
        }
    }

    return i;
}
