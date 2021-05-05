//cpp
#include "arrays_dyn_ch.h"
using std::cin; using std::cout;
using std::shared_ptr;

void use_dynamic_char_array(const std::size_t size)
{
    char* name = new char[size];//create dynamic memory on the heap
    cout<<"Enter name: \n";
    cin.getline(name, size);//use
    cout<<name<<"\n";

    delete[] name;
}

char* get_dynamic_char_array(const std::size_t size)
{
    char* char_ptr = new char[size];//create dynamic memory on the heap
    return char_ptr;
}

void limit_dynamic_char_array_scope(const std::size_t size)
{
    char* name = get_dynamic_char_array(size);

    cout<<"Enter name: \n";
    cin.getline(name, size);//use
    cout<<name<<"\n";

    delete[] name;
}

char* get_dynamic_char_mem(const std::size_t size)
{
    cout<<"Create memory \n";
    char* char_ptr = new char[size];//create dynamic memory on the heap
    return char_ptr;
}

void delete_dynamic_char_mem(char* array)
{
    cout<<"Delete memory\n";
    delete[] array;
}

void limit_dynamic_char_mem(std::size_t size)
{
    shared_ptr<char[]> chars(get_dynamic_char_mem(size), delete_dynamic_char_mem);

    cout<<"Enter text: \n";
    cin.getline(chars.get(), size);

    cout<<chars<<"\n";
}