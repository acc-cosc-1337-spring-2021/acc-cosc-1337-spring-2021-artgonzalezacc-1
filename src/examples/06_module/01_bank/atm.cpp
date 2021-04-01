//atm.cpp
#include "atm.h"

using std::cout;

void ATM::display_balance()const
{
    cout<<"ATM Balance: "<<account.get_balance()<<"\n";
}