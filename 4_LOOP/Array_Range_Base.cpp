#include <iostream>
#include <vector>

using namespace std;

int main () {

    int scores[]={10,20,30};

    //for (int score:scores) // score has 2 and each score number access scores elements
                             // no need int i; i<5 ;i++
    for (auto score:scores)  // auto declare int
        cout << score << endl;


    for (auto val :{1,2,3,4,5})
        cout << val << endl;

    for (auto c :"This is last your chance")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
return 0;
}