#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptra1 = &a;
    int* ptra2 = ptra1;

    /*
        ok so,
        there is one variable "a" with value 10
        and two pointer variables ptra1 and ptra2
        ptra1 has value = address of a
        ptra2 has value = ptra1(which is address of a)
        so ptra1 and ptra2 basically have the same values
        that is same addresses (address of a)
        so dereferencing them using (*) operator
        will dereference the same memory location that is address of a
        and prints out 10(value of a)
    */
    cout << endl;
    cout << ptra1 << " " << ptra2;
    cout << endl;
    cout << *ptra1 << " " << *ptra2;
    return 0;
}