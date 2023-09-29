#include <iostream>
using namespace std;

int main() {
    // binary to decimal
    int binaryNum;
    cout << "binary number: ";
    cin >> binaryNum;

    int lastDigit;

    int decimalNum = 0;

    int power = 1;

    while (binaryNum > 0) {
        lastDigit = binaryNum % 10;
        decimalNum = decimalNum + lastDigit * power;
        power *= 2;
        binaryNum /= 10;
    }

    cout << "decimal form: " << decimalNum;
    return 0;
}