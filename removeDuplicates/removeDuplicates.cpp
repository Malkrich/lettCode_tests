#include "removeDuplicates.hpp"

int removeDuplicates(std::vector<int>& nums)
{
    for(auto value : nums)
        std::cout << value << ", ";
    std::cout << std::endl;

    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] == nums[i-1])
        {
            nums.erase(nums.begin()+i);
            i--;
        }
    }

    for(auto value : nums)
        std::cout << value << ", ";
    std::cout << std::endl;

    return nums.size();
}

int removeDuplicates2(std::vector<int>& nums)
{
    for(auto value : nums)
        std::cout << value << ", ";
    std::cout << std::endl;

    int j = 1;

    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] > nums[i-1])
        {
            nums[j] = nums[i];
            j++;
        }
    }

    for(auto value : nums)
        std::cout << value << ", ";
    std::cout << std::endl;

    return j;
}
