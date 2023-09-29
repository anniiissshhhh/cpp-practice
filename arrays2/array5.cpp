#include <iostream>
using namespace std;

int main() {
    //? transpose of a matrix
    int row, col;
    cout << "row: ";
    cin >> row;
    cout << "col: ";
    cin >> col;

    int array[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "  ele[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "\narray: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\ntranspose of array: \n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}