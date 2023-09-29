#include <iostream>
using namespace std;

int main() {
    int p = 5;
    int &q = p;

    q++;
    cout << p << endl;

    cout << "address of p: " << &p << endl;
    cout << "address of q: " << &q << endl;

    return 0;
}