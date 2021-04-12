#include "ref_pointers.h"
#include<iostream>
using std::cout;
#include<memory>
using std::unique_ptr; using std::make_unique;
#include<vector>
using std::vector;

int main() 
{
	//reference
	int num = 20, num1 = 25;
	int& num_ref = num;

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num via num_ref: "<<&num_ref<<"\n";
	cout<<"Value of num via num_ref: "<<num_ref<<"\n";

	cout<<"Value of num1: "<<num1<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n\n";
	
	num_ref = num1;//NO ERROR, BUT references cant be reassigned
	
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address of num1 via num_ref ????: "<<&num_ref<<"\n\n\n\n";

	//Pointers
	int num2 = 10, num3 = 15;
	int* num_ptr = &num2;

	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num2: "<<&num2<<"\n";
	cout<<"Address of num2 via num_ptr: "<<num_ptr<<"\n";
	cout<<"Value of num2 via num_ptr: "<<*num_ptr<<"\n";
	cout<<"Address of num_ptr: "<<&num_ptr<<"\n";

	*num_ptr = 5;
	cout<<"Value of num2: "<<num2<<"\n\n\n";

	num_ptr = &num3;
	cout<<"Value of num3: "<<num3<<"\n";
	cout<<"Address of num3: "<<&num3<<"\n";
	cout<<"Address of num3 via num_ptr: "<<num_ptr<<"\n\n\n";

	*num_ptr = 100;
	cout<<"Value of num3: "<<num3<<"\n\n\n";

	int* ptr_num1 = new int(5);//create dynamic memory
	cout<<"Ptr num1 value: "<<*ptr_num1<<"\n\n";
	delete ptr_num1;

	unique_ptr<int> up_num = make_unique<int>(100);//smart pointer; unique ptr; self
	//memory management like the string and vector classes
	cout<<"up num address "<<&up_num<<"\n";
	cout<<"Value of up num: "<<*up_num<<"\n\n";
	use_smart_pointer(up_num);

	//what about move:
	vector<unique_ptr<int>> numbers;
	numbers.push_back(std::move(up_num));
	cout<<"Vector value "<<*numbers[0]<<"\n";

	unique_ptr<int> up_num2 = get_smart_pointer();
	cout<<"Value: "<<*up_num2;
	
	return 0;
}