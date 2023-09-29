#include <iostream>
using namespace std;

int main() {
    // find sum of digits in a given number
    int num;
    cout << "number: ";
    cin >> num;

    int rem;

    int sum = 0;
    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }

    cout << "sum: " << sum;
    return 0;
}