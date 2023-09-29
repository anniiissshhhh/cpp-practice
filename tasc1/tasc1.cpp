#include <iostream>
using namespace std;

int sumInRange1(int x, int y) {
    // 3n + 3 operations where n = no of terms with formula (y - x + 1)
    int sum = 0;
    for (int i = x; i <= y; i++) {
        sum += i;
    }
    return sum;
}

int sumInRange2(int x, int y) {
    // max 10 instructions
    // no of terms
    int n = y - x + 1;

    // first term
    int a = x;

    // difference between two consecutive terms
    int d = 1;

    // sum in AP formula
    int sum = (n * (2 * a + (n - 1) * d)) / 2;

    return sum;
}

int main() {
    int x;
    cout << "x: ";
    cin >> x;

    int y;
    cout << "y: ";
    cin >> y;

    int sum1 = sumInRange1(x, y);
    cout << "\nsum1: " << sum1;

    int sum2 = sumInRange2(x, y);
    cout << "\nsum2: " << sum1;
    return 0;
}