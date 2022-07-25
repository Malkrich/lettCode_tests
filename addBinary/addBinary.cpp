#include "addBinary.hpp"

string addBinary(string a, string b)
{
    char retain = '0';

    string result;

    if(a.length() != b.length())
    {
        if(a.length() < b.length())
        {
            string diff(b.length()-a.length(),'0');
            a = diff + a;
        }
        else
        {
            string diff(a.length()-b.length(),'0');
            b = diff + b;
        }
    }
    result.resize(a.length());

    for(int i = a.length()-1; i >= 0; i--)
    {
        if(retain)
        {
            result[i] = addBits(addBits(a[i],b[i]),retain);
            if(a[i] == '0' && b[i] == '0')
                retain = '0';
        }
        else
            result[i] = addBits(a[i],b[i]);

        if(a[i] == '1' && b[i] == '1')
            retain = '1';
    }

    if(retain == '1')
        result = '1' + result;

    return result;
}

char addBits(char a, char b) { return (a ^ b) ? '1' : '0'; }
