#include <iostream>
#include <vector>

#include "bits/stdc++.h"
using namespace std;

int main() {
    //? nth ele in fib series - bruteforce soln
    // * time: O(n) // linear growth of space
    //* space: O(n) // n-2 operations = n
    // int n;
    // cout << "n: ";
    // cin >> n;

    // vector<int> arr(n);
    // arr[0] = 0;
    // arr[1] = 1;

    // for (int i = 2; i <= n; i++) {
    //     arr[i] = arr[i - 1] + arr[i - 2];
    // }

    // cout << arr[n];

    //? nth ele in fib series - optimised solution
    // * time: O(n) // 3n-2 instructions, approx: n
    //* space: O(1) // space isnt growing ie constant

    int n;
    cout << "n: ";
    cin >> n;

    int a = 0;  // 0th fib
    int b = 1;  // 1st fib
    int c = 1;  // nth fib

    if (n == 0 || n == 1) {
        c = n;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;  // adding prev two fibs
        a = b;      // putting b in a
        b = c;      // putting the new ele in b
        // looping till we reach nth fib
    }
    // printing out the nth fib
    cout << n << "th fib: " << c;

    return 0;
}