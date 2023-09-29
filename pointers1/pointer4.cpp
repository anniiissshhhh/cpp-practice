#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int *ptr = &x;

    cout << "\nvalues before:\n";
    cout << "x: " << x << "\n";

    // value present at address stored in ptr
    cout << "*ptr: " << *ptr << "\n";

    for (int i = 1; i <= 10; i++) {
        *ptr += 1;
    }

    cout << "\nafter updation: \n";
    // when we update the value using *ptr (dereference operator)
    // the original value at that address updates

    cout << "x: " << x << "\n";
    cout << "*ptr: " << *ptr << "\n";

    return 0;
}