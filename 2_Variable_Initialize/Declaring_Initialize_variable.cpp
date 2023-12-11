#include <iostream>

using namespace std;

int main (){
    using namespace std;    //use std namespace 
    
    string name;
    int age;
    double hourly_wage;

    cout << "Enter your name" << endl; // Export to Console
    cin >> name; //Insert to variable

    cout << "Enter your age" << endl;   
    cin >> age;
    
    cout << "Enter your hourly_wage" << endl;
    cin >> hourly_wage;

    cout << name << " 's age is " << age << "Hourly_wagw is " << hourly_wage << endl;

    return 0;
}