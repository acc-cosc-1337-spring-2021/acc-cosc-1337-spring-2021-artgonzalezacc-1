//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<iostream>

template<typename T>
class Vector
{
public:
    Vector() = default;
    Vector(std::size_t s);
    Vector(const Vector<T>& v);//copy constructor Rule 1 of 3- rule of 3 - legacy C++
    Vector<T>& operator=(const Vector<T>& v);//copy assignment Rule 2 of 3 - Rule of 3 - legacy c++ 
    Vector(Vector<T>&& v);//move constructor Rule 4 of 5 - Rule of 5 - modern C++
    Vector<T>& operator=(Vector<T>&& v);//move assignment Rule 5 of 5 -Rule of 5-modern C++
    std::size_t Size()const{return size;}
    std::size_t Capacity()const{return space;}
    T& operator[](std::size_t i){return elements[i];}
    T& operator[](std::size_t i)const{return elements[i];}
    void Reserve(std::size_t new_allocation);
    void Resize(std::size_t new_allocation);
    void PushBack(T value);
    ~Vector();//Rule 3 of 3 - Rule of 3 - legacy c++
private:
    std::size_t size{0};//number of elements in the vector
    std::size_t space{0};//number of elements + free slots
    T* elements{nullptr};
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPILIER{2};
};


void use_stack_my_vector();
void use_heap_vector();
Vector<int> get_vector();

template<class T>
T add(T a, T b)
{
    return a + b;
}

#endif
