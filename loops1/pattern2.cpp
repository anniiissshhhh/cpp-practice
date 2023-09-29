#include <iostream>
using namespace std;

int main() {
    // rectangular pattern with spaces
    int noOfRows;
    int noOfCol;
    string value;

    cout << "no of rows: ";
    cin >> noOfRows;
    cout << "no of cols: ";
    cin >> noOfCol;

    for (int row = 1; row <= noOfRows; row++) {
        for (int col = 1; col <= noOfCol; col++) {
            if (row == 1 || row == noOfRows || col == 1 || col == noOfCol) {
                value = "*";
            } else {
                value = " ";
            }
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}