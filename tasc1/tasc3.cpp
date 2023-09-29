#include <iostream>

#include "bits/stdc++.h"
using namespace std;

int main() {
    //? time complexity of nested loops: O(x * x)
    int x;
    cout << "x: ";
    cin >> x;

    // squared starred pattern
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}