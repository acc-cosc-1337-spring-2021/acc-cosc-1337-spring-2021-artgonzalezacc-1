//header pointer forward and reverse iteration including + iteration
#include<iostream>
#include<iomanip>

const int COLS = 10;
const int ROWS = 10;

void arrays_and_pointers();

void populate_time_table(int times_table[][COLS], int ROW);
void display_times_table(int times_table[][COLS], int ROW);

void display_array(int* nums, const int SIZE);