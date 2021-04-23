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
    std::size_t Size()const{return size;}
    int& operator[](std::size_t i){return elements[i];}
    int& operator[](std::size_t i)const{return elements[i];}
    ~Vector();//Rule 3 of 3 - Rule of 3 - legacy c++
private:
    std::size_t size;
    int* elements;
};


void use_stack_my_vector();
void use_heap_vector();

#endif
