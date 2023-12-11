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
    //Overloaded Construction

    Player(){
        cout << "No args construction called" << endl;
    }

    Player(string name){
        cout << "string args construction called" << endl;
    }

    Player(string name, int heath, int xp){
        cout << "three args construction called" << endl;
    }

    ~Player(){  //Deconstructor
        cout << "destruction called for" << endl;
    }


};

int main(){
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("hero");
        Player Vilian("Vilian",100,12);
        Vilian.set_name("Vilian"); 
    }

    Player *enemy = new Player;
    enemy -> set_name("enemy");

    Player *level_boss = new Player ("Level Boss", 1000, 300);
    level_boss -> set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;


}