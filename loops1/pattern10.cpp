#include <iostream>
using namespace std;

int main() {
    // right angled tringle numbers
    int noOfRows;
    cout << "no of rows: ";
    cin >> noOfRows;

    int value;

    for (int row = 1; row <= noOfRows; row++) {
        // printing first triangle (spaces)
        int noOfCols1 = noOfRows - row;
        for (int col = 1; col <= noOfCols1; col++) {
            cout << " "
                 << " ";
        }

        // printing secon triangle (numbers)
        int noOfCols2 = row;
        for (int col = 1; col <= noOfCols2; col++) {
            value = col;
            cout << value
                 << " ";
        }

        // printing third triangle (numbers)
        int noOfCols3 = row - 1;
        for (int col = (row - 1); col >= 1; col--) {
            value = col;
            cout << value
                 << " ";
        }

        cout << endl;
    }
    return 0;
}