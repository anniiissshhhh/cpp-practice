#include <iostream>
using namespace std;

int main() {
    // taking input in a 2d array
    // no of rows
    int row;
    cout << "row: ";
    cin >> row;

    // no of cols
    int col;
    cout << "col: ";
    cin >> col;

    // defining 2d array
    int array[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "ele: ";
            cin >> array[i][j];
        }
    }

    cout << endl;
    // printing array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}