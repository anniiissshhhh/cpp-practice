#include <iostream>
using namespace std;

int sumOfArr(int* arr, int idx, int n) {
    // base work
    // if array has only one element
    // then that element is the sum of given array
    if (idx == n - 1) {
        return arr[idx];
    }

    // assumption
    // the function will calculare the sum of remaining array
    // that is sumOfArr(arr, idx + 1, n)

    // self work
    // calculate sum

    return arr[idx] + sumOfArr(arr, idx + 1, n);
}

int main() {
    int arr[] = {2, 3, 5, 20, 1};
    int idx = 0;
    int n = 5;
    int ans = sumOfArr(arr, idx, n);
    cout << ans;
    return 0;
}