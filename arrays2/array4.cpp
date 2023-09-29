#include <iostream>
using namespace std;

int main() {
    //? multiplication of matrices
    // taking input size of matrixA
    int rowA;
    cout << "rowA: ";
    cin >> rowA;

    int colA;
    cout << "colA: ";
    cin >> colA;

    // defining arrayA
    int arrayA[rowA][colA];

    // inputting matrixA
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            cout << "  eleA: ";
            cin >> arrayA[i][j];
        }
    }

    cout << endl;

    // taking input size of matrixB
    int rowB;
    cout << "rowB: ";
    cin >> rowB;

    int colB;
    cout << "colB: ";
    cin >> colB;

    // defining arrayA
    int arrayB[rowB][colB];

    // inputting matrixA
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            cout << "  eleB: ";
            cin >> arrayB[i][j];
        }
    }

    cout << endl;
    cout << "matrixA: \n";

    // printing both the matrices
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            cout << arrayA[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "matrixB: \n";

    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            cout << arrayB[i][j] << " ";
        }
        cout << endl;
    }

    if (colA != rowB) {
        cout << "\nmatrix multiplication is not possible";
    } else {
        // creating answer matrix
        int arrayC[rowA][colB];

        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colB; j++) {
                // rowB == colA
                int value = 0;
                for (int k = 0; k < rowB; k++) {
                    value += arrayA[i][k] * arrayB[k][j];
                }
                arrayC[i][j] = value;
            }
        }

        cout << endl;
        // printing answer matrix
        cout << "matrixA * matrixB: \n";
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colB; j++) {
                cout << arrayC[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}