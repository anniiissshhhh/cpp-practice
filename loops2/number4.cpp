#include <iostream>
using namespace std;

int main() {
    // find the sum of the following series
    // 1-2+3-4+5-6.....n
    int n;
    cout << "n: ";
    cin >> n;

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            ans += i;
        } else {
            ans -= i;
        }
    }

    cout << "ans: " << ans;
    return 0;
}