#include "longestCommonPrefix.hpp"

std::string longestCommonPrefix(std::vector<std::string>& strs)
{
    std::string ret;
    int minimum_length = strs[0].length();

    for(int i = 1; i < strs.size(); i++)
    {
        if(strs[i].length() < minimum_length)
            minimum_length = strs[i].length();
    }

    for(int i = 0; i < minimum_length; i++)
    {
        for(int word = 1; word < strs.size(); word++)
        {
            if(strs[0].at(i) != strs[word].at(i))
                return ret;
        }
        ret.push_back(strs[0].at(i));
    }

    return ret;
}
