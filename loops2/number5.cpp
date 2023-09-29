#include <iostream>
using namespace std;

int main() {
    // printing n factorial numbers
    int n;
    cout << "n: ";
    cin >> n;

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        cout << factorial << endl;
    }
    return 0;
}