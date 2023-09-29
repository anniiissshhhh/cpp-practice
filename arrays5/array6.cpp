#include <iostream>
#include <vector>

#include "functions.cpp"
using namespace std;

int noOfPairsOfTargetSum(vector<int> V, int target) {
    int count = 0;
    int i = 0;
    int j = V.size() - 1;

    while (i < j) {
        if (V[i] + V[j] == target) {
            count++;
            i++;
            j--;
        } else if (V[i] + V[j] < target) {
            i++;
        } else {
            j--;
        }
    }
    return count;
}

int main() {
    //? target sum
    int m;
    cout << "m: ";
    cin >> m;

    vector<int> arr(m);
    arr = inputInVector(arr);

    cout << "arr: ";
    printingVector(arr);

    // soln
    int x;
    cout << "\nx: ";
    cin >> x;

    int ans = noOfPairsOfTargetSum(arr, x);
    cout << "no of pairs: " << ans;

    return 0;
}