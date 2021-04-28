//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<iostream>

class Vector
{
public:
    Vector(std::size_t s);
    Vector(const Vector& v);//copy constructor Rule 1 of 3- rule of 3 - legacy C++
    Vector& operator=(const Vector& v);//copy assignment Rule 2 of 3 - Rule of 3 - legacy c++ 
    Vector(Vector&& v);//move constructor Rule 4 of 5 - Rule of 5 - modern C++
    Vector& operator=(Vector&& v);//move assignment Rule 5 of 5 -Rule of 5-modern C++
    std::size_t Size()const{return size;}
    std::size_t Capacity()const{return space;}
    int& operator[](std::size_t i){return elements[i];}
    int& operator[](std::size_t i)const{return elements[i];}
    void Reserve(std::size_t new_allocation);
    void Resize(std::size_t new_allocation);
    void PushBack(int value);
    ~Vector();//Rule 3 of 3 - Rule of 3 - legacy c++
private:
    std::size_t size;
    std::size_t space;//number of elements + free slots
    int* elements;
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPILIER{2};
};


void use_stack_my_vector();
void use_heap_vector();
Vector get_vector();

#endif
