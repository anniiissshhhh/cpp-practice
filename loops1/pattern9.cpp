#include <iostream>
using namespace std;

int main() {
    // even odd rectangular pattern
    int noOfRows;
    cout << "no of rows: ";
    cin >> noOfRows;

    int noOfCols;
    cout << "no of cols: ";
    cin >> noOfCols;

    int value;

    for (int row = 1; row <= noOfRows; row++) {
        // printing columns

        for (int col = 1; col <= noOfCols; col++) {
            if ((row + col) % 2 == 0) {
                value = 1;
            } else {
                value = 2;
            }
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}