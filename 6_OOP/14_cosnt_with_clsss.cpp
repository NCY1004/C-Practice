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
    string get_name(){
        return name;
    }
    void set_name(string name_val){
        name = name_val;
    }
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player {"None",0,0}{
}

Player::Player(string name_val) 
    : Player {name_val,0,0}{
}

Player::Player(string name_val, int health_val, int xp_val) 
    : name(name_val), health(health_val), xp(xp_val){
    }

//void display_player_name(const Player &p){
//    cout << p.get_name() << endl;
//}

int main (){
    const Player vilian ("Vilian",100,55);
    vilian.xp =1000; //Cannot modify object vilian

    Player hero {"hero", 100, 15};
}