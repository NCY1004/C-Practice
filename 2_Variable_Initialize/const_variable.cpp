#include <iostream>

using namespace std;

int main (){
    
    int small_room = 0;
    int large_room = 0;
    const double small_room_cost = 25; //const cannot change value after declare value
    const double large_room_cost = 35;
    const double tax = 0.06;
     

    cout << "Welcom to our Hotel! How many do you want rooms?" << endl;
    cout << "Small room (per $25)" << endl;
    cin >> small_room;
    cout << "Large room (per $35)" << endl;
    cin >> large_room;

    cout << "=================================================" << endl;

    cout << "number of small rooms : " << small_room << endl;
    cout << "number of large rooms : " << large_room << endl;
    cout << "price per small room  : " << small_room_cost  << endl;
    cout << "price per large room  : " << large_room_cost  << endl;
    cout << "Cost :" << (small_room * small_room_cost) + (large_room * large_room_cost) << endl;
    cout << "tax :$" << ((small_room * small_room_cost) + (large_room * large_room_cost)) * tax << endl;

    cout << "=================================================" << endl;

    cout << " Total estimate :$" << (((small_room * small_room_cost) + (large_room * large_room_cost)) * tax) +
      (small_room * small_room_cost) + (large_room * large_room_cost) <<endl;


return 0;
}