#include <iostream>
#include <climits>
using namespace std;

int main (){

int integer;
char character;
short int shrt;
long int li;
long long int lli;
cout << "Maximum Value:" << endl;
cout << "char:" << CHAR_MAX << endl;
cout << "int:" << INT_MAX << endl;
cout << "short:" << SHRT_MAX << endl;
cout << "long:" << LONG_MAX << endl;
cout << "long long:" << LLONG_MAX << endl;

cout << sizeof (integer) << endl;
cout << sizeof (character) << endl;
cout << sizeof (shrt) << endl;
cout << sizeof (li) << endl;
cout << sizeof (lli) << endl;

return 0;
}