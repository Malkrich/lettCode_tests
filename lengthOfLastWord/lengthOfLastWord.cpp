#include "lengthOfLastWord.hpp"

int lengthOfLastWord(string s)
{
    int i = s.length()-1;
    int end_spaces= 0;

    while(s[i] == ' ')
    {
        end_spaces++;
        i--;
    }

    while(s[i] != ' ')
    {
        if(i == 0)
            return s.length() - end_spaces;
        i--;
    }

    return s.length()-1 - i - end_spaces;
}
