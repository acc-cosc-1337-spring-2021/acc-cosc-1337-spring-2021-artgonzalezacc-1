#include<iostream>
#include "casting.h"

using std::cout;  using std::cin;

int main()
{
    double num;
    cout<<"Enter a decimal value: ";
    cin>>num;

    cout<<"Static cast conversion: "<<static_cast_double_int(num);


    return 0;
}