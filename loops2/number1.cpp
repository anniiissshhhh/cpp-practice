#include <iostream>
using namespace std;

int main() {
    // counting number of digits
    int num;
    cout << "number: ";
    cin >> num;

    int number;
    number = num;

    int count = 0;
    while (num > 0) {
        num = num / 10;
        count++;
    }

    cout << "number of digits in " << number << " are " << count;
    return 0;
}