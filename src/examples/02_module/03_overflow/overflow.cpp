#include "overflow.h"
#include <climits>
/*
Function int_overflow creates an int num variable with value 2147483647, 
add 1 to it, and returns it

@param none
@return num + 1
*/
int int_overflow()
{
    auto num = 2147483647;
    num = num + 1;

    return num;
}

double double_underflow()
{
    auto closesToZeroDouble = __DBL_MIN__;
    auto tooCloseToZeroDouble = closesToZeroDouble / 10;

    return tooCloseToZeroDouble;
}