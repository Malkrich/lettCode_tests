#include "isValid.hpp"

bool isValid(std::string s)
{
    bool ret = true;
    std::map<char,char> charMap;
    std::stack<char> charStack;

    charMap['('] = ')';
    charMap['['] = ']';
    charMap['{'] = '}';

    for(char c : s)
    {
        if(charMap.find(c) != charMap.end())
            charStack.push(c);
        else
        {
            if(charStack.empty() || c != charMap[charStack.top()])
            {
                ret = false;
                break;
            }
            else
                charStack.pop();
        }
    }

    if(!charStack.empty())
        ret = false;

    return ret;
}
