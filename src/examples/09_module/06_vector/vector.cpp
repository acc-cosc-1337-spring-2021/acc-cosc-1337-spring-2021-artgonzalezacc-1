#include "vector.h"

using std::cout;

//
template<typename T>
 Vector<T>::Vector(std::size_t s) 
 : size(0) , space{s}, elements{new T[s]}
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
template<typename T>
 Vector<T>::Vector(const Vector<T>& v)
    : size{v.size}, elements{new T[v.size]}
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
template<typename T>
 Vector<T>& Vector<T>::operator=(const Vector<T>& v)
 {
     cout<<"Copy assignment operator\n";
     T* temp = new T[v.size];

     for(std::size_t i=0; i < v.size; ++i)
     {
         temp[i] = elements[i];
     }

     delete [] elements;
     elements = temp;
     size = v.size;

     return *this;
 }

/*
1-Get dynamic memory from v
2-Get size from v
3 point v.elements to nullptr
*/
template<typename T>
 Vector<T>::Vector(Vector<T>&& v)
 : size{v.size}, elements{v.elements}
 {
     cout<<"Move constructor "<<elements<<"\n";
     v.size = 0;
     v.elements = nullptr;
 }

/*
1-Clear/delete original dynamic memory
2-point elements to v.elements
3-get the size from v
4-point v.elements to nullptr
5-set v.size to 0
*/
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)
 {
    
    delete elements;
    elements = v.elements;
    cout<<"Move assignment "<<elements<<"\n";
    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
 }

/*
1-Make sure new allocation is greater than space
2-Create temp dynamic memory of size new allocation
3-Copy values from old memory array to temp array
4-Delete the old array 
5-Set elements to temp memory array
6-set space = new allocation
*/
template<typename T>
void Vector<T>::Reserve(std::size_t new_allocation)
{
    if(new_allocation <= space)
    {
        return;
    }

    T* temp = new T[new_allocation];

    for(std::size_t i=0; i < size; ++i)
    {
        temp[i] = elements[i];
    }

    delete[]elements;
    elements = temp;
    space = new_allocation;
}

/*
1-Call reserve function w new allocation value
2-Initialize elements beyond size
3-Set size to new allocation
*/
template<typename T>
void Vector<T>::Resize(std::size_t new_allocation)
{
    Reserve(new_allocation);

    for(std::size_t i=0; i < new_allocation; ++i)
    {
        elements[i] = 0;
    }

    size = new_allocation;
}

/*
1- if space 0 call Reserve with Reserve Default Size
2- else if size == space call Reserve w space * Reserve Default Multiplier
NOT PART OF ELSE IF
3-Add value to the end of the elements array
4-increment size
*/
template<typename T>
void Vector<T>::PushBack(T value)
{
    if(space == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(space == size)
    {
        Reserve(space * RESERVE_DEFAULT_MULTIPILIER);
    }
    cout<<&elements[size]<<"\n";
    elements[size] = value;
    size++;
}

template<typename T>
Vector<T>::~Vector()
{
    cout<<"Clear memory\n";
    delete[] elements;
}

//tell c++ which data types to support
template class Vector<int>;
template class Vector<double>;
template class Vector<char>;


//free functions
void use_stack_my_vector()
{
    Vector<int> v(3);
    //v goes out of scope..destructor executes..clears memory
}

void use_heap_vector()
{
    Vector<int>* v = new Vector<int>(3);
    delete v;//executes destructor
}

Vector<int> get_vector()
{
    Vector<int> v(3);
    return v;
}