#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "x: ";
    cin >> x;

    int y;
    cout << "y: ";
    cin >> y;

    int result;

    int* ptrx = &x;
    int* ptry = &y;
    int* ptr_result = &result;

    *ptr_result = *ptrx + *ptry;

    cout << *ptrx << " + " << *ptry << " = " << *ptr_result;

    return 0;
}