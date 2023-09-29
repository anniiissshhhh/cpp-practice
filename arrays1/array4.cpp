#include <iostream>
using namespace std;

int main() {
    //? find the maximum value out of all elements in the array

    // declaring array
    int length;
    cout << "length: ";
    cin >> length;
    int array[length];

    // taking input in array
    for (int i = 0; i < length; i++) {
        cout << "element: ";
        cin >> array[i];
    }

    // displaying the array
    cout << "array: ";
    for (int ele : array) {
        cout << ele << " ";
    }

    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    cout << "\nmax: " << max;

    return 0;
}