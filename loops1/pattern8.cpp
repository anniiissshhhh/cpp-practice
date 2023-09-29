#include <iostream>
using namespace std;

int main() {
    // normal pattern - 123456... in all rows but with spaces in between
    int noOfRows;
    cout << "no of rows: ";
    cin >> noOfRows;

    int noOfCols;
    cout << "no of cols: ";
    cin >> noOfCols;

    for (int row = 1; row <= noOfRows; row++) {
        for (int col = 1; col <= noOfCols; col++) {
            if (row == 1 || row == noOfRows || col == 1 || col == noOfCols) {
                cout << col << " ";
            } else {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }

    return 0;
}