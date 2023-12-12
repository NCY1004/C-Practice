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
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};


Player::Player(){   //constructor
        name = "None";
        health = 100;
        xp = 3;
}

Player::Player(string name_val){   //constructor
        name = name_val;
        health = 0;
        xp = 0;
}
Player::Player(string name_val, int health_val, int xp_val){   //constructor
        name = "None";
        health = health_val;
        xp = xp_val;
}


int main (){
    Player empty;
    Player Chan{"Chan"};
    Player villain{"villain", 100, 55};

    return 0;

}