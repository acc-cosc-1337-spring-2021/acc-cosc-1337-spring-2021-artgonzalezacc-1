#include "vector.h"

using std::cout;

//
 Vector::Vector(std::size_t s) 
 : size(s) , elements{new int[s]}
 {
     cout<<"Create and init elements "<<elements<<" \n";
     for(std::size_t i=0; i < size; ++i)
     {
         elements[i] = 0;
     }
 }

/*
1-initialize size for v1
2-initialize memory for v1
3-copy element values from v to v1
*/
 Vector::Vector(const Vector& v)
    : size{v.size}, elements{new int[v.size]}
 {
     cout<<"Execute copy constructor"<<elements<<" \n";

     for(std::size_t i=0; i < v.size; ++i)
     {
         elements[i] = v.elements[i];
     }
 }

/*
1-Create temporary Memory
2-Copy values from v into temporary memory
3-Delete class v1 elements memory
4-Point elements memory to temporary memory
5-Return a erference to this vector
*/
 Vector& Vector::operator=(const Vector& v)
 {
     cout<<"Copy assignment operator\n";
     int* temp = new int[v.size];

     for(std::size_t i=0; i < v.size; ++i)
     {
         temp[i] = elements[i];
     }

     delete [] elements;
     elements = temp;
     size = v.size;

     return *this;
 }

Vector::~Vector()
{
    cout<<"Clear memory\n";
    delete[] elements;
}

//free functions
void use_stack_my_vector()
{
    Vector v(3);
    //v goes out of scope..destructor executes..clears memory
}

void use_heap_vector()
{
    Vector* v = new Vector(3);
    delete v;//executes destructor
}