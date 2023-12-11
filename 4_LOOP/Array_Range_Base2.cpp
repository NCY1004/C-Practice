#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<double> temperatures{87.9, 77.9, 80.0, 72.5};
    double average_temp{};
    double total {};
    

    for (auto temp:temperatures) //temp access tempeture elements
        total += temp;

    if (temperatures.size()!=0)
        average_temp = total / temperatures.size();

    cout << temperatures.size() << endl;
    cout << "Average temperature is " << average_temp << endl;

return 0;
}