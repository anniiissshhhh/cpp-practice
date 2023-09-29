#include <iostream>
using namespace std;

int main() {
    //? calculate sum of all elements in an array

    // declaring array
    int lengthOfArray;
    cout << "size of array: ";
    cin >> lengthOfArray;
    int array[lengthOfArray];

    // taking input in array
    for (int i = 0; i < lengthOfArray; i++) {
        cout << "input number: ";
        cin >> array[i];
    }
    cout << endl;

    // printing out the array
    cout << "array: ";
    for (int ele : array) {
        cout << ele << " ";
    }
    cout << endl
         << endl;

    int sum = 0;
    for (int i = 0; i < lengthOfArray; i++) {
        sum += array[i];
    }

    cout << "sum of each element: " << sum;
    cout << endl;

    return 0;
}