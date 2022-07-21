#include "strStr.hpp"

int strStr(string haystack, string needle)
{
    if(needle == "")
        return 0;

    int j;

    for(int i = 0; i < haystack.length(); i++)
    {
        j = 0;
        if(haystack[i] == needle[j])
        {
            for(j = 1; j < needle.length(); j++)
            {
                if(haystack[i+j] != needle[j])
                    break;
            }
            if(j == needle.length())
                return i;
        }
    }

    return -1;
}
