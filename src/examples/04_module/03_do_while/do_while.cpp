#include "do_while.h"

using std::cin; using std::cout;

//Write code for void function prompt_user to loop until
//user opts not to continue. 
void prompt_user()
{
    char choice;

    do
    {
        run_menu();
        cout<<"Type e or E to exit...";
        cin>>choice;
    }
    while(!(choice == 'e' || choice == 'E'));
} 

void run_menu()
{
    cout<<"1-Accounting\n";
    cout<<"2-Payroll\n";
    cout<<"3- Exit\n\n";
}

