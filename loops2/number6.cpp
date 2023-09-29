#include <iostream>
using namespace std;

int main() {
    // finding a to the power b
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++) {
        ans *= a;
    }

    cout << "ans: " << ans;
    return 0;
}