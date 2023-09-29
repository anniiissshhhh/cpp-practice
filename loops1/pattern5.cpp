#include <iostream>
using namespace std;

int main() {
    // equilateral triangle pattern
    int noOfRows;
    string value;

    cout << "no of rows: ";
    cin >> noOfRows;

    value = "*";

    for (int row = 1; row <= noOfRows; row++) {
        // printing first triangle (spaces)
        int noOfCols1 = noOfRows - row;
        for (int col = 1; col <= noOfCols1; col++) {
            value = " ";
            cout << value << " ";
        }

        // printing seconf triangle (stars)
        int noOfCols2 = row;
        for (int col = 1; col <= noOfCols2; col++) {
            value = "*";
            cout << value << " ";
        }

        // printing third triangle (stars)
        int noOfCols3 = row - 1;
        for (int col = 1; col <= noOfCols3; col++) {
            value = "*";
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}