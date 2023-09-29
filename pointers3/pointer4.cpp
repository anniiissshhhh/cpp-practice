#include <iostream>
using namespace std;

void process(int *arr, int n) {
    // inside this function we have the access of the same array in main
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    *(arr + 1) = 100;  // will update the element on index 1
}

int main() {
    int arr[3] = {1, 3, 5};
    process(arr, 3);

    cout << "\n";

    for (int i = 0; i < 3; i++) {
        cout << *(arr + i) << " ";
    }
    return 0;
}