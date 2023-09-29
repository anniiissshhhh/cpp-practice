#include <iostream>
using namespace std;

int main() {
    //? pointers
    /*
        &<variable_name> is an address operator
        it is used to extract address of a variable
        the code below prints out the address of two variables
    */
    // int x = 10;
    // int y = 0;
    // cout << &x << " " << &y;

    //? can we store the address of a variable?
    /*
        yes- using pointers
        pointers can store address
    */
    // int x = 10;
    // float y = 7.8;
    // int *a = &x;
    // float *b = &y;

    // cout << a << " " << b;

    //? address of ptr
    int x = 10;
    int *ptrX = &x;

    float y = 7.4;
    float *ptrY = &y;

    cout << "\naddress of x: " << ptrX;
    cout << "\naddress of Y: " << ptrY;

    return 0;
}
