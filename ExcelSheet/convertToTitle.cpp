#include "convertToTitle.hpp"

/*
 * A : 65
 * Z : 90
 */

string convertToTitle(int columnNumber)
{
    string ret = {};
    int exp = 1;
    int charValue;

    while(columnNumber/exp > 0)
    {
        charValue = getNumberForChar(columnNumber / exp % 26);
        ret = char(charValue + 64) + ret;
        exp *= 26;
        columnNumber -= charValue;
    }

    return ret;
}

int getNumberForChar(int value) {return value == 0 ? 26 : value;}
