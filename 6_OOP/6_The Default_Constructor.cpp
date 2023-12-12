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
    void set_name(string name_val){
        name = name_val;
    }

    string get_name(){
        return name;
    }


    Player(){   //constructor
        name = "None";
        health = 100;
        xp = 3;
   }

    Player(string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main(){
    Player Hero;
    Player Chan {"Chan", 100, 13};
    Chan.set_name("Chan");
    cout << Chan.get_name() << endl;

}