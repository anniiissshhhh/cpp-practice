#include <iostream>
#include <vector>
using namespace std;

void spiralOrder(vector<vector<int>>& V) {
    int left = 0;
    int right = V[0].size() - 1;
    int top = 0;
    int bottom = V.size() - 1;

    int direction = 0;

    while (left <= right && top <= bottom) {
        // left to right
        if (direction == 0) {
            for (int col = left; col <= right; col++) {
                cout << V[top][col] << " ";
            }
            top++;
        }

        // top to bottom
        else if (direction == 1) {
            for (int row = top; row <= bottom; row++) {
                cout << V[row][right] << " ";
            }
            right--;
        }

        // right to left
        else if (direction == 2) {
            for (int col = right; col >= left; col--) {
                cout << V[bottom][col] << " ";
            }
            bottom--;
        }

        // bottom to top
        else {
            for (int row = bottom; row >= top; row--) {
                cout << V[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
        // 0, 1, 2, 3
    }
}

int main() {
    // spiral matrix
    int row;
    cout << "row: ";
    cin >> row;

    int col;
    cout << "col: ";
    cin >> col;

    vector<vector<int>> vec(row, vector<int>(col));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "  ele: ";
            cin >> vec[i][j];
        }
    }

    cout << "\nvec:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nspiral: ";
    spiralOrder(vec);
    return 0;
}