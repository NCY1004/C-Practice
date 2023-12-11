#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
    // attribute
    string name{"Player"};
    int health{100};
    int xp{3};

    // method
    void talk(string text_to_say) { cout << name << "says" << text_to_say << endl; }
    bool is_dead();
};

class Account
{
public:
    // attribute
    string name{"Account"};
    double balance{0.0};

    // method
    bool deposit(double bal)
    {
        balance += bal;
        cout << "In deposit" << endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In widthdraw" << endl;
    }
};

int main()
{
    Account Chan_account;
    Chan_account.name = "Chan's account";
    Chan_account.balance = 5000.0;
    Chan_account.deposit(1000.0);
    Chan_account.withdraw(500.0);

    Player Chan;
    Chan.name = "Yeong";
    Chan.health = 200;
    Chan.xp = 20;
    Chan.talk("Hi There!!");

    // dereference pointer
    Player *enemy = new Player; // enemy is not object of Player. Enemy is pointer of object of Player
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destory you!");
    return 0;
}
