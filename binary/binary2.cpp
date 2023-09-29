#include <iostream>
using namespace std;

int main() {
    // decimal to binary
    int decimalNum;
    cout << "decimal: ";
    cin >> decimalNum;

    int binaryNum = 0;
    int power = 1;

    while (decimalNum > 0) {
        int parityDigit = decimalNum % 2;
        binaryNum += parityDigit * power;
        power *= 10;
        decimalNum /= 2;
    }

    cout << "binary: " << binaryNum;
    return 0;
}