#include <cmath>
#include <iostream>
#include <vector>

#include "functions.cpp"
using namespace std;

bool checkAbsDiff(vector<int> V, int target) {
    int i = 0;  // left pointer
    int j = 1;  // right pointer
    int n = V.size();

    while (i < n && j < n) {
        if (abs(V[i] - V[j]) == target) {
            return true;
        } else if (abs(V[i] - V[j] > target)) {
            i++;
        } else {
            j++;
        }
    }
    return false;
}

int main() {
    int m;
    cout << "m: ";
    cin >> m;

    vector<int> arr(m);
    arr = inputInVector(arr);

    cout << "arr: ";
    printingVector(arr);

    int x;
    cout << "\nx: ";
    cin >> x;

    bool ans = checkAbsDiff(arr, x);
    if (ans) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}