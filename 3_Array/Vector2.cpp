#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<int> vector1;
    vector<int> vector2;
    cout <<"1d_vector"<<endl;
    vector1.push_back(10); //push to first element location
    cout << vector1.at(0) << endl; //at is export vector's elements
    vector1.push_back(20);
    cout << vector1.at(1) <<endl;

    vector2.push_back(100);
    cout << vector2.at(0) << endl;
    vector2.push_back(200);
    cout << vector2.at(1) << endl;

    cout <<"2d_vector"<<endl;
    vector <vector <int>> vector_2d; //2d vector

    vector_2d.push_back(vector1); //push first line
    vector_2d.push_back(vector2); //push second line
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << vector1.at(0) << endl; 

    
    

    


}