#ifdef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
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

#endif