#include <iostream>
using namespace std;

void printArray(int* arr, int idx, int n) {
    // halth condition
    // if array is empty or full, print nothing
    if (idx == n || n == 0) return;

    // self work
    // to print the idxth element
    cout << arr[idx] << " ";

    // assumption
    // assume it works perfectly
    // that it prints remaining elements of array
    printArray(arr, idx + 1, n);
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 0, n);
    return 0;
}