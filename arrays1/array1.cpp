#include <iostream>
using namespace std;

int main() {
    int array1[] = {1, 2, 3, 4, 5};

    int sizeOfArray = sizeof(array1);
    int lengthOfArray = sizeOfArray / sizeof(array1[0]);
    // cout << "size: " << sizeOfArray << endl;
    // cout << "length: " << lengthOfArray << endl;
    // cout << endl;

    // traversing through array (for loop)
    // uses index
    cout << "---- using for loop ----\n";
    for (int i = 0; i < lengthOfArray; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    // for-each loop
    // uses element
    cout << "---- using for-each loop ----\n";
    for (int ele : array1) {
        cout << ele << " ";
    }
    cout << endl;

    // while loop
    cout << "---- using while loop ----\n";
    int i = 0;
    while (i < lengthOfArray) {
        cout << array1[i] << " ";
        i++;
    }
    return 0;
}