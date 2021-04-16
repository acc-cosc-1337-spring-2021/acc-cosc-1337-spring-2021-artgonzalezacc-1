//cpp
#include "arrays_pointers.h"
using std::cout; 


void arrays_and_pointers()
{
    const int SIZE = 3;
    int nums[SIZE]{3, 6, 1};
    cout<<nums<<"\n";

    int* ptr = nums;
    cout<<*ptr<<"\n";
    *ptr++;
    cout<<*ptr<<"\n";
    *ptr++;
    cout<<*ptr<<"\n";
    *ptr--;
    cout<<*ptr<<"\n";
}

void populate_time_table(int times_table[][COLS], int ROW)
{
    for(int i = 0; i < ROW; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            times_table[i][j] = (i + 1) * (j + 1);
        }
    }
}

void display_times_table(int times_table[][COLS], int ROW)
{
    for(int i =0; i < ROW; ++i)
    {
        for(int j = 0; j < ROW; ++j)
        {
            cout<<std::setw(5)<<times_table[i][j];
        }

        cout<<"\n";
    }
}

void display_array(int* nums, const int SIZE)
{
    for(int i =0; i < SIZE; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}