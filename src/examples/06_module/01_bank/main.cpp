#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
using std::cout; using std::cin;

#include<memory>
using std::unique_ptr; using std::make_unique;

#include<vector>
using std::vector;

int main()
{
	const int SIZE = 3;
	SavingsAccount savings[SIZE]{SavingsAccount(50), SavingsAccount(100),
	                             SavingsAccount(150)};
	
	cout<<savings[0]<<"\n";
	cout<<savings[1]<<"\n";
	cout<<savings[2]<<"\n\n";

	for(auto saving: savings)
	{
		cout<<saving<<"\n";
	}
	cout<<"\n\n Pointers";
	SavingsAccount* ptr = savings;
	cout<<*ptr<<"\n";
	cout<<ptr->get_balance()<<"\n";

	//Derived Class pointer can be assigned to a Base class pointer
	/*unique_ptr<BankAccount> s = make_unique<SavingsAccount>(1000);
	cout<<"Balance: "<<s->get_balance()<<"\n";
	cout<<"Interest Balance: "<<static_cast<SavingsAccount*>(s.get())->get_balance()<<"\n";
	cout<<"Interest Balance: "<<static_cast<SavingsAccount*>(s.get())->get_balance_with_interest()<<"\n";

	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>();
	cout<<"Balance: "<<checking->get_balance()<<"\n";

	unique_ptr<BankAccount> checking1 = make_unique<CheckingAccount>(500);
	cout<<"Balance: "<<checking1->get_balance()<<"\n\n\n";

	vector<unique_ptr<BankAccount>> accounts;

	accounts.push_back(std::move(s));
	accounts.push_back(std::move(checking));
	accounts.push_back(std::move(checking1));

	cout<<"Loop vector: \n";	
	for(auto& account: accounts)
	{
		cout<<account->get_balance()<<"\n";
	}*/
	
	return 0;
}