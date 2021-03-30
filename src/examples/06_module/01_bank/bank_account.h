//bank_account.h
#include<iostream>

class BankAccount
{
public://access specifiers-USERS OF OUR CLASS(OTHER OBJECTS) CAN SEE WHAT'S IN PUBLIC
    BankAccount() = default;
    BankAccount(int b) : balance(b){}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
   
private://access specifier-ONLY BANK ACCOUNT CLASS SEES DATA/FUNCTIONS IN PRIVATE
    int balance{0};//protect the  data integrity 
};

//FREE FUNCTIONS-NOT PART OF THE BANK ACCOUNT CLASS!!!!!!!
void display_balance(const BankAccount& account);
BankAccount get_account(int balance);