#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Shallow {
private:
    int *data;
public:
    void set_data_value(int d) {*data =d;}
    int get_data_value() {return *data;}

    //Constructor
    Shallow(int d);
    //  Constructor
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){ //copy pointer
        cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow(){
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s){
    cout << s.get_data_value() << endl;
}

int main(){
    Shallow obj1 {100};
    display_shallow(obj1);

    Shallow obj2 {obj1};
    display_shallow(obj2);

}