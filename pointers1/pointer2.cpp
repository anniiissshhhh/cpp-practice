#include <iostream>
using namespace std;

int main() {
    int x = 10;

    int *ptr;  // declaring a pointer
    ptr = &x;

    cout << ptr;
    return 0;
}