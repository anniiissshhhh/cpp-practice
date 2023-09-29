#include <iostream>
using namespace std;

int main() {
    // reverse the digits of a number
    int num;
    cout << "number: ";
    cin >> num;

    int revNum = 0;
    while (num > 0) {
        int lastDigit = num % 10;  // gettig the last digit
        revNum = revNum * 10 + lastDigit;
        num = num / 10;  // removing the last digit
    }

    cout << "reverse: " << revNum;
    return 0;
}