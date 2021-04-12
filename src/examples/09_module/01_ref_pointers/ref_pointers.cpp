#include "ref_pointers.h"

//
void ref_ptr(int& num, int* num1)
{
    num = 10;
    *num1 = 20;
}

void use_smart_pointer(std::unique_ptr<int>& num)
{
    std::cout<<"Smart Pointer value: "<<*num<<"\n";
}

std::unique_ptr<int> get_smart_pointer()
{
    std::unique_ptr<int> num = std::make_unique<int>(500);

    return num;
}

