#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account Chan;
    Chan.set_name("Chan's account");
    Chan.set_balace(1000.0);

    if(Chan.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;


    if(Chan.withdraw(500.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;

    if(Chan.withdraw(1500.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;

    return 0;
}