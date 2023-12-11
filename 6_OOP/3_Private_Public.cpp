#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
private:
    //attribute
    string name {"Player"};
    int health {100};
    int xp{3};
public:    
    //method
    void talk(string text_to_say) {cout<< name << " says " <<text_to_say << endl;}
    bool is_dead();
};

int main(){
    Player Chan;
    //Chan.name = "Chan";
    //cout << Chan.health << endl;
    Chan.talk("Hello There");
    return 0;
}
