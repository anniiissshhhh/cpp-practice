#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // halth condition - n is single digit
    if (n >= 0 && n <= 9) return n;

    // assumption and self-work
    int ans = sumOfDigits(n / 10) + (n % 10);
    return ans;
}

int main() {
    //? recursion
    int number = 1234;
    cout << sumOfDigits(number);

    return 0;
}