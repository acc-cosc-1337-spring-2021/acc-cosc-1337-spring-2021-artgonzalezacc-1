//bank_account.h
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>

class BankAccount
{
friend void friend_display_balance(const BankAccount& account);

public://access specifiers-USERS OF OUR CLASS(OTHER OBJECTS) CAN SEE WHAT'S IN PUBLIC
    BankAccount() = default;
    BankAccount(int b) : balance(b){bank_balance += balance;}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private://access specifier-ONLY BANK ACCOUNT CLASS SEES DATA/FUNCTIONS IN PRIVATE
    int balance{0};//this is customer balance         
    static int bank_balance;//this is the total of all bank customer balances
};

//FREE FUNCTIONS-NOT PART OF THE BANK ACCOUNT CLASS!!!!!!!
void display_balance(const BankAccount& account);
BankAccount get_account(int balance);

#endif