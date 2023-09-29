#include <iostream>
using namespace std;

int power(int p, int q) {
    // base work
    if (q == 0) return 1;

    // assumption and self work
    int ans = power(p, q - 1) * p;
    return ans;
}

int main() {
    //? power using recursion
    int ans = power(2, 4);
    cout << ans;
    return 0;
}