#include <math.h>

#include <iostream>
using namespace std;

void lineBreak() {
    cout << endl;
}

int square(int x) {
    return x * x;
}

float areaOfCircle(int r) {
    return 3.14 * square(r);
}

float circumference(int r) {
    return 2 * 3.14 * r;
}

bool checkEligibility(int age, int limit) {
    if (age >= limit) {
        // person is eligible
        return true;
    } else {
        // person is not eligible
        return false;
    }
}

bool isOdd(int num) {
    if (num % 2 == 0) {
        // num is even
        return false;
    } else {
        // num is odd
        return true;
    }
}

bool isPrime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            // num is not prime
            return false;
        }
    }
    return true;
}

bool isPrimeBtr(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            // num is not prime
            return false;
        }
    }
    return true;
}

int main() {
    // q1 - square
    cout << "squares: ";
    for (int i = 1; i <= 5; i++) {
        cout << square(i) << " ";
    }

    lineBreak();
    lineBreak();

    // q2 - area and circumference
    int r;
    cout << "radius: ";
    cin >> r;
    cout << "area: " << areaOfCircle(r);
    cout << "\ncircumference: " << circumference(r);

    lineBreak();
    lineBreak();

    // q3 - age - eligible to vote of not
    int votingLimit = 18;
    int isEligibleForVoting = checkEligibility(15, votingLimit);
    if (isEligibleForVoting) {
        cout << "person is eligible to vote";
    } else {
        cout << "person is not eligible to vote";
    }

    lineBreak();
    lineBreak();

    // q4 - print odd numbers in range (inclusive)
    int a;
    cout << "a: ";
    cin >> a;

    int b;
    cout << "b: ";
    cin >> b;

    cout << "odd numbers in range " << a << " to " << b << ": \n";
    for (int i = a; i <= b; i++) {
        if (isOdd(i)) {
            cout << i << " ";
        }
    }

    lineBreak();
    lineBreak();

    // q5 - print all prime numbers in range (inclusive)
    cout << "prime numbers in range " << a << " to " << b << ": \n";
    for (int i = a; i <= b; i++) {
        if (isPrimeBtr(i)) {
            cout << i << " ";
        }
    }

    return 0;
}