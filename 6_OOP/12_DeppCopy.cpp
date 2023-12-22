#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Deep {
private:
    int *data;
public:
    void set_data_value(int d) {*data =d;}
    int get_data_value() {return *data;}

    //Constructor
    Deep(int d);
    //  Constructor
    Deep(const Deep &source);
    //Destructor
    ~Deep();
};

Deep::Deep(int d){
    data = new int; //alocate storage
    *data = d;
}

Deep::Deep(const Deep &source)
    :Deep{*source.data}{    //copy pointer and pointer data 
        cout << "Copy constructor - ideep copy" << endl;
}

Deep::~Deep(){
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep d){
    cout << d.get_data_value() << endl;
}

int main(){
    Deep obj1 {100};
    display_deep(obj1);

    Deep obj2 {obj1};

    obj2.set_data_value(1000);

}