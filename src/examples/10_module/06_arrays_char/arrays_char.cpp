//cpp
#include "arrays_char.h"
using std::cout;

void use_char_terminated()
{
    const int SIZE = 5;
    char name[SIZE]{'J', 'o', 'h', 'n', '\0'};

    cout<<name<<"\n\n";

    for(std::size_t i=0; i < SIZE; ++i)
    {
        cout<<i<<" "<<name[i]<<"\n";
    }
}

void use_char_not_terminated()
{
    char name[5] {'J', 'o', 'h', 'n'};
    cout<<"not terminated "<<name<<"\n\n";
    
    std::size_t i=0;

    while(name[i] != '\0')
    {
        cout<<name[i]<<"\n";
        i++;
        
        if(name[i] == NULL)
        {
            cout<<"found null term\n";
        }
    }

    //cout<<"null terminator "<<
}

void use_string_terminated()
{
    std::string name = "john";
    cout<<name<<"\n";
    name = "jo\0hn";
    cout<<name<<"\n";
}