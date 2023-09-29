#include <iostream>
#include <vector>
using namespace std;

// normal approach
int rectangleSum1(vector<vector<int>>& vec, int l1, int r1, int l2, int r2) {
    int sum = 0;
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += vec[i][j];
        }
    }

    return sum;
}

// prefix sum row-wise approach
int rectangleSum2(vector<vector<int>>& vec, int l1, int r1, int l2, int r2) {
    int sum = 0;

    // prefix sum array (row-wise)
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 1; j < vec[i].size(); j++) {
            vec[i][j] += vec[i][j - 1];
        }
    }

    for (int i = l1; i <= l2; i++) {
        if (r1 == 0) {
            sum += vec[i][r2];
        } else {
            sum += vec[i][r2] - vec[i][r1 - 1];
        }
    }
    return sum;
}

// prefix sum row and colomn wise both
int rectangleSum3(vector<vector<int>>& vec, int l1, int r1, int l2, int r2) {
    int sum = 0;

    // prefix sum array row-wise
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            vec[i][j] += vec[i][j - 1];
        }
    }

    // prefix sum array col-wise
    for (int i = 1; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            vec[i][j] += vec[i - 1][j];
        }
    }

    int topSum = 0, leftSum = 0, topLeftSum = 0;

    if (l1 != 0) topSum = vec[l1 - 1][r2];
    if (r1 != 0) leftSum = vec[l2][r1 - 1];
    if (l1 != 0 && r1 != 0) topLeftSum = vec[l1 - 1][r1 - 1];

    sum = vec[l2][r2] - topSum - leftSum + topLeftSum;

    return sum;
}

int main() {
    // taking input the dimensions
    int row;
    cout << "row: ";
    cin >> row;

    int col;
    cout << "col: ";
    cin >> col;

    // declaring 2d vector
    vector<vector<int>> vec(row, vector<int>(col));

    // taking input in 2d vector
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "  ele: ";
            cin >> vec[i][j];
        }
    }

    // printing out the 2d vector
    cout << "\nvec: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";

    // taking input the coordinates
    int l1, l2, r1, r2;

    cout << "l1: ";
    cin >> l1;
    cout << "r1: ";
    cin >> r1;

    cout << "\nl2: ";
    cin >> l2;
    cout << "r2: ";
    cin >> r2;

    // printing out the coordinates
    cout << "\n(l1,r1): "
         << "(" << l1 << "," << r1 << ")";

    cout << "\n(l2,r2): "
         << "(" << l2 << "," << r2 << ")";

    // method1
    int sum1 = rectangleSum1(vec, l1, r1, l2, r2);
    cout << "\n\nsum from m1: " << sum1;

    // method2
    int sum2 = rectangleSum2(vec, l1, r1, l2, r2);
    cout << "\nsum from m2: " << sum2;

    // method3
    int sum3 = rectangleSum3(vec, l1, r1, l2, r2);
    cout << "\nsum from m3: " << sum3;
    return 0;
}