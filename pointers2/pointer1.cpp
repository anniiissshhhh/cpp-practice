#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    // swapping x and y
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
    cout << "\n\n"
         << x << " " << y << " " << *x << " " << *y;
}

/*
    ? in scope of swap function
    x and y are two pointer variables
    x stores whats stored in ptrx ie address of x(from main scope)
    and y stores ptry's address(from main scope)
    on dereferencing them the ones in main scope(values) gets swapped
    using the algorithm used as we are not copying the values but
    using pointer variables x and y to get ptrx and ptry (addresses)
    and then dereferencing and swapping the MAIN FUNCTION SCOPE BUCKETS
*/

int main() {
    int x = 10;
    int y = 20;

    cout << "\nbefore swaping: ";
    cout << "\nx: " << x;
    cout << "\ny: " << y;

    int *ptrx = &x;
    int *ptry = &y;
    cout << "\nptrx: " << ptrx;
    cout << "\nptry: " << ptry;
    cout << "\n*ptrx: " << *ptrx;
    cout << "\n*ptry: " << *ptry;

    swap(ptrx, ptry);

    cout << "\n\nafter swaping: ";
    cout << "\nx: " << x;
    cout << "\ny: " << y;

    return 0;
}