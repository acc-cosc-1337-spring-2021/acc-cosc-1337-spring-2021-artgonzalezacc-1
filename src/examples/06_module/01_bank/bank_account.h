//bank_account.h
class BankAccount
{
public://access specifiers-USERS OF OUR CLASS(OTHER OBJECTS) CAN SEE WHAT'S IN PUBLIC
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
   
private://access specifier-ONLY BANK ACCOUNT CLASS SEES DATA/FUNCTIONS IN PRIVATE
    int balance{0};//protect the  data integrity 
};