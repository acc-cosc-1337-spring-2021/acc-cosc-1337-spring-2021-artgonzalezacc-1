//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{ 
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
        bank_balance -= amount;
    }        
}

int BankAccount::bank_balance = 0;

//FRIEND FREE FUNCTION
void friend_display_balance(const BankAccount& account)
{
    std::cout<<"Friend Display balance: "<<account.balance<<"\n";
}

//FREE FUNCTIONS NOT PART OF THE BANK ACCOUNT CLASS!!!!!!
void display_balance(const BankAccount& account)
{
    std::cout<<"Display balance: "<<account.get_balance()<<"\n";
}

BankAccount get_account(int balance)
{
    BankAccount account(balance);

    return account;
}