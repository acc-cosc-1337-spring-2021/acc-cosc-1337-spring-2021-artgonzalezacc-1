#include "value_ref.h"

#include<iostream>
using std::cout;

#include<string>
using std::string;



int main() 
{
	auto letter = 'a'; //char
	cout<<"Memory used by char: "<<sizeof(letter)<<"\n";
	
	string name = "Joe";//create and assign value to string
	cout<<"Memory of string on stack is: "<<&name<<"\n";
	cout<<"Memory space used by string is: "<<sizeof(name)<<"\n";
	cout<<"Size of name string is: "<<name.size()<<"\n";
	cout<<"Capacity of name string is: "<<name.capacity()<<"\n\n";

	string name1 ("Joe");
	name1.push_back(' ');
	name1.append("Do");
	name1.push_back('e');
	cout<<name1<<"\n";


	string name2{'h', 'i'};
	cout<<name2<<"\n";












//	int num = 10;
//	pass_by_const_ref(10);
	

	/*
	auto num = 5;
	cout<<"size of num in bytes: "<<sizeof(num)<<"\n";
	cout<<"The memory address of num is: "<<&num<<"\n";

	int& num_ref = num;//a clone of num
	cout<<"Value of num_ref is : "<<num_ref<<"\n";
	num_ref = 10;
	cout<<"Value of num_ref is : "<<num_ref<<"\n";
	cout<<"Value of num is : "<<num<<"\n";

	num = 20;
	cout<<"Value of num_ref is : "<<num_ref<<"\n";
	cout<<"Value of num is : "<<num;*/

	return 0;
}