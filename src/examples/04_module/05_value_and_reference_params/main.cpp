#include "value_ref.h"
#include<iostream>
using std::cout;

int main() 
{
	int num = 10;
	pass_by_const_ref(10);
	

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