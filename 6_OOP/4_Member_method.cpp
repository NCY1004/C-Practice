#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
private:
    // attribute
    string name;
    double balance;
public:
    void set_balace(double bal) {balance = bal;}
    double get_balance(){return balance;}

    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n){
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance - amount >=0){
        balance -= amount;
        return true;
    }
    else {
        return false;
    }

}
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