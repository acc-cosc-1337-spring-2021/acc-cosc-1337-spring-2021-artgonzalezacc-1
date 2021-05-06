//arrays_mem.h - stack array example
#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>
#include <chrono>

//function prototype for stack_array
void use_stack_array();

void array_months();

void array_for_ranged();

void populate_array(int list[], int size, bool randomize);

int linear_search(const int list[], int size, int search_value);

int binary_search(const int list[], int size, int search_value);

void bubble_sort(int list[], int size);