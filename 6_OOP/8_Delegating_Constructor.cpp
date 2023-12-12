#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
//Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player {"None",0,0}{
        cout << "No-arg constructor" << endl;
}

Player::Player(string name_val) 
    : Player {name_val,0,0}{
        cout << "One-arg constructor" << endl;
}


Player::Player(string name_val, int health_val, int xp_val) 
    : name{"None"}, health{health_val},xp{xp_val}{
        cout << "Three-arg constructor" << endl;
}

int main (){
    Player empty;
    Player Chan{"Chan"};
    Player villain{"villain", 100, 55};

    return 0;

}