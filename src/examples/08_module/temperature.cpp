//function code
#include "temperature.h"
#include<fstream>
#include<iostream>
#include<string>

using std::cout;

void write_to_file()
{
    std::ofstream out_file;
    out_file.open("names.dat");

    cout<<"Write to file..\n";
    out_file<<"joe\n";
    out_file<<"mary\n";
    out_file<<"john\n";

    out_file.close();
}

void read_from_file()
{
    std::ifstream in_file;
    in_file.open("names.dat");

    if(in_file.is_open())
    {
        std::string name;
        cout<<"file opened--read\n";
        while(in_file>>name)
        {
            cout<<"Read value: "<<name<<"\n";
        }
    }

    cout<<"Close file\n";
    in_file.close();
}