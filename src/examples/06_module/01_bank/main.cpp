#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
using std::cout; using std::cin;
#include<memory>
using std::unique_ptr; using std::make_unique;

int main()
{
	unique_ptr<SavingsAccount> savings = make_unique<SavingsAccount>(1000);
	cout<<"Balance: "<<savings->get_balance()<<"\n";
	cout<<"Interest Balance: "<<savings->get_balance_with_interest()<<"\n";

	unique_ptr<CheckingAccount> checking = make_unique<CheckingAccount>();
	cout<<"Balance: "<<checking->get_balance()<<"\n";

	unique_ptr<CheckingAccount> checking1 = make_unique<CheckingAccount>(500);
	cout<<"Balance: "<<checking1->get_balance()<<"\n";
	
	return 0;
}