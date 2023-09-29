#include <iostream>
using namespace std;

int main() {
    //? arrays as pointers
    int arr[3] = {12, 5, 10};
    int *ptrx = &arr[0];
    int *ptry = &arr[1];
    int *ptrz = &arr[2];

    // cout << arr << ": " << *arr << "\n";
    // cout << *ptrx << " " << *ptry << " " << *ptrz << "\n";
    // cout << *(arr + 0) << " " << *(arr + 1) << " " << *(arr + 2) << "\n";
    // printing out the array by its name:
    // it prints out the address of the first element in it
    // that is ptrx in my case which is pointing arr[0]

    int n = 3;
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
        // cout << arr[i] << " ";
    }

    // arr[i] -> *(arr + 1)
    return 0;
}