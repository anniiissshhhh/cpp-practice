#include <iostream>
using namespace std;

int p = 5;
void printP() {
    cout << p << endl;
}

int main() {
    // scope of variables
    int p = 7;
    cout << p << "\n";
    printP();
    cout << ::p;  // prints 5
    /*
      :: is a scope resolution operator
      it is used to access the global scoped variable of the same name as local scoped variable
    */
    return 0;
}