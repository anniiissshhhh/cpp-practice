#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) return 1;  // base work
    int ans = n * factorial(n - 1);
    return ans;
}

int main() {
    //? factorial using recursion
    // function that can calculate n!
    for (int i = 1; i <= 10; i++) {
        cout << i << "! = " << factorial(i) << "\n";
    }

    return 0;
}