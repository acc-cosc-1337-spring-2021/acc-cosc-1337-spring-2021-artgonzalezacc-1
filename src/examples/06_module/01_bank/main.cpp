#include "atm.h"
#include "bank_account.h"
#include<iostream>
#include<time.h>
using std::cout; using std::cin;


int main()
{
	srand(time(NULL));
	BankAccount account = get_account(100);
	BankAccount a1(100), a2(100);
	BankAccount a3 = a1 + a2;
	cout<<a3;
//	display_balance(account);
	
	/*char choice;
	ATM atm;

	do
	{
		atm.scan_card();
		atm.display_balance();

		cout<<"Continue y?";
		cin>>choice;

	}while(choice == 'y' || choice == 'Y');

	friend_display_balance(account);
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
	cout<<"Balance: "<<balance<<"\n";*/

	return 0;
}