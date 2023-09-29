#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void rotateVec(vector<vector<int>> &V) {
    // transpose
    for (int i = 0; i < V.size(); i++) {
        for (int j = 0; j < i; j++) {
            swap(V[i][j], V[j][i]);
        }
    }

    // reverse every row
    for (int i = 0; i < V.size(); i++) {
        reverse(V[i].begin(), V[i].end());
    }

    return;
}

int main() {
    //? rotation of matrix without using extra space

    // dimensions of 2d vector
    int row;
    cout << "row: ";
    cin >> row;

    int col;
    cout << "col: ";
    cin >> col;

    // iniitializing 2d vector
    vector<vector<int>> vec(row, vector<int>(col));

    // taking input in 2d vector
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "  ele: ";
            cin >> vec[i][j];
        }
    }

    rotateVec(vec);

    // printing out 2d vector
    cout << "\nvec: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}