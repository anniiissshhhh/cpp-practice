#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    cout << ptr << "\n";

    /*
        we can use dereference operator to access
        the value stored in the pointer variable operator ptr
        so
        ptr -> address stroed in it
        \*ptr -> value of the address stored in it
    */
    cout << *ptr << "\n";

    return 0;
}