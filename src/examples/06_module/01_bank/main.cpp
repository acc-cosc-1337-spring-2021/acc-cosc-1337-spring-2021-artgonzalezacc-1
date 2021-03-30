#include "bank_account.h"
#include<iostream>
using std::cout;


int main()
{
	BankAccount account = get_account(100);

	display_balance(account);
	
//	cout<<sizeof(account)<<"\n";
	auto balance = account.get_balance();

	cout<<"Balance: "<<balance<<"\n";

	cout<<"Deposit $50\n";
	account.deposit(50);

	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n\n";

	cout<<"Withdraw $10\n";
	account.withdraw(10);
	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n";

	return 0;
}