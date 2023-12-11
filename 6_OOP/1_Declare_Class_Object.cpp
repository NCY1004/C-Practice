#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    //attribute
    string name {"Player"};
    int health {100};
    int xp{3};
    
    //method
    void talk(string);
    bool is_dead();
};


class Account {
    //attribute
    string name{"Account"};
    double balance{0.0};

    //method
    bool deposit(double);
    bool withdraw(double);
};


int main (){
    Account Chan_account;
    Account hero_account;

    
    Player Chan;
    Player hero;    

    Player players[]= {Chan, hero};

    Player *enemy{nullptr}; 
    enemy = new Player;

    delete enemy;
 return 0;   
}