#include <iostream>
#include <vector>

using namespace std;
int main () {
    vector<int> vec = {10,20,30,40,50}; //No need to declare size

    vec.at(0)={100};
    vec.at(4)={1000};

    for (int i=0; i<5; i++) {
        cout << vec.at(i)<< endl;
    }



}