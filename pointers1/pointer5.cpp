#include <iostream>
using namespace std;

int main() {
    // we can update and access the value using dereference operator
    int x = 10;
    int* ptr = &x;

    *ptr = 23;
    cout << x << endl;
    cout << *ptr << endl;

    // content in x is changed using the dereference operator
    // from 10 to 23
    // both x and *ptr will access the same bucket
    // that is ptr or &x: address of x

    return 0;
}