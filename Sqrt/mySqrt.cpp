#include "mySqrt.hpp"

int mySqrt(int x)
{
    unsigned long long int i = 0;
    while(i*i <= x)
        i++;

    return i-1;
}

int mySqrt2(int x)
{
    long l = 0;
    long r = x;
    long m;

    while(l <= r)
    {
        m = (l+r)/2;
        if(m*m == x)
            return m;
        else if(m*m > x)
            r = m-1;
        else
            l = m+1;
    }

    return r;
}
