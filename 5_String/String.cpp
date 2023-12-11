#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main (){
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3;   
    cout << s0 << endl;
    cout << s0.length() << endl;

    cout << "s1 is initialized to: " << s1 << endl;

    for (int i=0; i<s1.length(); i++)
        cout << s1.at(i) << endl;

    
    s3 = "This is a best";

    cout << s3.substr(0,4) << endl;
    cout << s3.substr(5,1) << endl;


    string full_name{};
    cout << "Enter your full name";
    getline (cin, full_name);

    cout << "Your full name is" << full_name << endl;
    return 0;
}