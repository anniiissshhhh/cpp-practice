#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "size: ";
    cin >> n;

    // printing upper row
    int noOfRows1 = n;
    for (int row1 = 0; row1 < noOfRows1; row1++) {
        // printing first triangle (spaces)
        int noOfCols1 = n - row1 - 1;
        for (int col1 = 0; col1 < noOfCols1; col1++) {
            cout << " "
                 << " ";
        }

        // printing second triangle (stars)
        int noOfCols2 = row1 + 1;
        char ch = 65;
        for (int col2 = 0; col2 < noOfCols2; col2++) {
            cout << (char)ch << " ";
            ch++;
        }

        // printing third triangle (stars)
        int noOfCols3 = row1;
        for (int col3 = 0; col3 < noOfCols3; col3++) {
            cout << (char)ch << " ";
            ch++;
        }
        cout << endl;
    }

    // printing lower triangle
    int noOfRows2 = n - 1;
    for (int row2 = 0; row2 < noOfRows2; row2++) {
        // printing first triangle (spaces)
        int noOfCols1 = row2 + 1;
        for (int col1 = 0; col1 < noOfCols1; col1++) {
            cout << " "
                 << " ";
        }

        // printing second triangle (stars)
        int noOfCols2 = n - row2 - 1;
        char ch = 65;
        for (int col2 = 0; col2 < noOfCols2; col2++) {
            cout << (char)ch << " ";
            ch++;
        }

        // printing third triangle (stars)
        int noOfCols3 = n - row2 - 2;
        for (int col3 = 0; col3 < noOfCols3; col3++) {
            cout << (char)ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}