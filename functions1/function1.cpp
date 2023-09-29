#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    int n1, n2;
    cout << "n1: ";
    cin >> n1;
    cout << "n2: ";
    cin >> n2;

    int sum = add(n1, n2);
    cout << n1 << " + " << n2 << " = " << sum;
    return 0;
}

int add(int a, int b) {
    return a + b;
}