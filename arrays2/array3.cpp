//? multiplication of two matrices
#include <iostream>
using namespace std;

int main() {
    // taking input the sizes
    int row;
    int col;
    int sum = 0;

    cout << "row: ";
    cin >> row;

    cout << "col: ";
    cin >> col;

    // defining 2d array
    int arrayA[row][col];
    int arrayB[row][col];

    // taking input in array A
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "ele: ";
            cin >> array[i][j];
            sum += array[i][j];
        }
    }

    // taking input in array B
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "ele: ";
            cin >> array[i][j];
            sum += array[i][j];
        }
    }

    // printing array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "sum is " << sum;

    return 0;
}