#include <iostream>
using namespace std;

int findMax(int* arr, int idx, int n) {
    // base case
    if (idx == n - 1) {
        return arr[idx];
    }
    return max(arr[idx], findMax(arr, idx + 1, n));
}

int main() {
    int n = 5;
    int arr[] = {3, 10, 3, 2, 5};
    int idx = 0;
    int ans = findMax(arr, idx, n);
    cout << ans << " ";
    return 0;
}