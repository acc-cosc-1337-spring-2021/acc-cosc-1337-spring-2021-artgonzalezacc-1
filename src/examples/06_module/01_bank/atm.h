//atm.h
#ifndef ATM_H
#define ATM_H
#include<iostream>
#include "bank_account.h"

class ATM
{
public:
    ATM(BankAccount& a) : account (a){}
    void display_balance()const;

private:
    BankAccount& account;

};


#endif
