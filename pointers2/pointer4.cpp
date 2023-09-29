#include <iostream>
using namespace std;

int main() {
    //? pointer arithmetic
    int x = 20;
    int* ptrx = &x;
    cout << "address of x: " << ptrx << endl;
    cout << "next memory address: " << ptrx + 1 << endl;

    return 0;
}