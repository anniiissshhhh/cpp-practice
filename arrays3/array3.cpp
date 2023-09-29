#include <iostream>
#include <vector>
using namespace std;

int left_most_one_row(vector<vector<int>> &V) {
    int leftMostOne = -1;
    int maxOnesRow = -1;

    // finding left most one in 0th row
    int j = V[0].size() - 1;
    while (j >= 0 && V[0][j] == 1) {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    // check in rest of the rows if we can find a one left to the leftMostOne
    for (int i = 0; i < V.size(); i++) {
        while (j >= 0 && V[i][j] == 1) {
            leftMostOne = j;
            maxOnesRow = i;
            j--;
        }
    }
}

int max_ones_row(vector<vector<int>> &V) {
    int maxOnes = 0;
    int maxOnesRow = -1;
    int columns = V[0].size();

    for (int i = 0; i < V.size(); i++) {
        for (int j = 0; j < V[i].size(); j++) {
            if (V[i][j] == 1) {
                int numberOfOnes = columns - j;
                if (numberOfOnes > maxOnes) {
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
            }
            break;
        }
    }

    return maxOnesRow;
}

int main() {
    int row;
    cout << "row: ";
    cin >> row;

    int col;
    cout << "col: ";
    cin >> col;

    vector<vector<int>> vec(row, vector<int>(col));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << " ele: ";
            cin >> vec[i][j];
        }
    }

    int res = max_ones_row(vec);
    cout << res;

    return 0;
}