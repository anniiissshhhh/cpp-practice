#include <iostream>
#include <vector>

#include "functions.cpp"
using namespace std;

bool targetSumCheck(vector<int> V, int target) {
    int i = 0;             // left pointer
    int j = V.size() - 1;  // right pointer

    while (i < j) {
        if (V[i] + V[j] == target) {
            return true;
        } else if (V[i] + V[j] < target) {
            i++;
        } else if (V[i] + V[j] > target) {
            j--;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    vector<int> arr(n);
    arr = inputInVector(arr);

    cout << "arr: ";
    printingVector(arr);

    int x;
    cout << "\nx: ";
    cin >> x;

    bool ans = targetSumCheck(arr, x);
    if (ans) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}